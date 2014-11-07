#include "TextQuery.hpp"
#include <sstream>
#include <stdexcept>

string TextQuery::text_line(line_no line) const
{
    if(line < lines_of_text.size())
        return lines_of_text[line];
    throw out_of_range("line number out of range");
}

void TextQuery::store_file(ifstream &is)
{
    string textline;
    while(getline(is, textline))
        lines_of_text.push_back(textline);
}

void TextQuery::build_map()
{
    for(line_no line_num = 0;line_num != lines_of_text.size();line_num++)
    {
        istringstream line(lines_of_text[line_num]);
        string word;
        while(line >> word)
        {
            word=cleanup_str(word);
            if(word_map.count(word)==0)
                word_map[word].push_back(line_num);
            else
            {
                if(line_num != word_map[word].back())
                    word_map[word].push_back(line_num);
            }
        }
    }
}

vector<TextQuery::line_no>

TextQuery::run_query(const string &query_word)  const
{
    map<string,vector<line_no> >::const_iterator loc = word_map.find(query_word);
    if(loc == word_map.end())
        return vector<line_no>();
    else
        return loc->second;
}


string TextQuery::cleanup_str(const string &word)
{
    string ret;
    for(string::const_iterator it = word.begin();it!=word.end();it++)
    {
        if(!ispunct(*it))
            ret+=tolower(*it);
    }
    return ret;
}
