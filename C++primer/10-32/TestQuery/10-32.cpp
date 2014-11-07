#include "TextQuery.hpp"
#include <cstdlib>

string make_plural(size_t, const string& ,const string&);
ifstream& open_file(ifstream&, const string&);

void print_results(const vector<TextQuery::line_no>& locs,const string& sought,const TextQuery &file)
{
    typedef vector<TextQuery::line_no> line_nums;
    line_nums::size_type size = locs.size();
    cout<<endl<<sought<<" occurs "<<size<<" "<<make_plural(size, "time", "s")<<endl;

    line_nums::const_iterator it = locs.begin();
    for(;it!=locs.end();it++)
        cout<< "\tline" << (*it)+1 <<") "<<file.text_line(*it)<<endl;
}

int main()
{
    ifstream infile;
    string file_name;
    cout<< "input file name: " <<endl;
    cin>>file_name;
    if(!open_file(infile, file_name))
    {
        cerr <<"No input file !"<<endl;
        return EXIT_FAILURE;
    }

    TextQuery tq;
    tq.read_file(infile);

    while(true)
    {
        cout<< "enter word to look for , or q to quit "<<endl;
        string s;
        cin>>s;
        string ret;
        for(string::const_iterator it = s.begin();it!=s.end();it++)
        {
            ret += tolower(*it);
        }
        s=ret;


    if(!cin ||s == "q" ||s=="Q")
        break;

    vector<TextQuery::line_no> locs = tq.run_query(s);

    print_results(locs, s, tq);
    }
    return 0;
}
