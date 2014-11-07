#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool isShorter(const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}

bool GT6(const string &s)
{
    return s.size()>=6;
}


string make_plural(size_t ctr,const string &word, const string &ending)
{
  return (ctr==1) ? word : word+ending;
}

int main()
{
    freopen("GT6.in","r",stdin);
    vector<string> words;
    string next_words;

    while(cin>>next_words)
    {
        words.push_back(next_words);
    }

    sort(words.begin(),words.end());
    vector<string>::iterator end_unique=unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
    stable_sort(words.begin(),words.end(),isShorter);

    vector<string>::size_type wc = count_if(words.begin(),words.end(),GT6);
    cout<<wc<<"  "<<make_plural(wc,"word","s")<<endl;

    for(vector<string>::iterator it=words.begin();it!=words.end();it++)
        cout<<*it<<endl;

    for(vector<string>::reverse_iterator it=words.rbegin();it!=words.rend();it++)
        cout<<*it<<endl;
    return 0;
}
