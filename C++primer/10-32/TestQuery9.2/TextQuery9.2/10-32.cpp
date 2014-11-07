#include "TextQuery.hpp"
#include "Query.hpp"
#include <cstdlib>

string make_plural(size_t, const string& ,const string&);
ifstream& open_file(ifstream&, const string&);

void print_results(const set<TextQuery::line_no>& locs, const TextQuery &file)
{
    typedef set<TextQuery::line_no> line_nums;
    line_nums::size_type size = locs.size();
    cout<<"match occurs "<<size<<make_plural(size," time","s")<<endl;

    line_nums::const_iterator it = locs.begin();
    for(;it != locs.end();it++)
        cout<< "\t(line" << (*it)+1 <<") "<<file.text_line(*it)<<endl;
}

int main()
{
    ifstream infile;
    string file_name;
    cout<< "input file name: " <<endl;
    cin>>file_name;
    getchar();
    if(!open_file(infile, file_name))
    {
        cerr <<"No input file !"<<endl;
        return EXIT_FAILURE;
    }

    TextQuery file;
    file.read_file(infile);
    typedef set<TextQuery::line_no> line_nums;

    while(true)
    {
        cout<< "enter word to look for , or q to quit\n";

        char str[100];
        gets(str);
        if(strlen(str)==0)
            continue;

        if(str[0] == 'q' ||str[0] == 'Q')
            break;
        else if(str[0]=='~')
        {
            string ret;
            for(int i=1;i<strlen(str);i++)
            {
                ret += tolower(str[i]);
            }
            Query q = ~Query(ret);
            const line_nums &locs = q.eval(file);
            cout<<endl<<"Executed Query for: " << q <<endl;
            print_results(locs, file);
        }
        else
        {
            string ret[50];
            char flag[50];
            int i,j;
            for(i=0,j=0;i<strlen(str);i++)
            {
                if(str[i] == '&' || str[i] == '|')
                    flag[j++]=str[i];
                else if(str[i]==' ')
                    continue;
                else
                    ret[j] += tolower(str[i]);
            }
            if(j==0)
            {
                    Query q= Query(ret[0]);
                    const line_nums &locs = q.eval(file);
                    cout<<endl<<"Executed Query for: " << q <<endl;
                    print_results(locs, file);
            }
            else if(j==1)
            {
                if(flag[0]=='&')
                {
                    Query q= Query(ret[0]) & Query(ret[1]);
                    const line_nums &locs = q.eval(file);
                    cout<<endl<<"Executed Query for: " << q <<endl;
                    print_results(locs, file);
                }

                else if(flag[0]=='|')
                {
                    Query q= Query(ret[0]) | Query(ret[1]);
                    const line_nums &locs = q.eval(file);
                    cout<<endl<<"Executed Query for: " << q <<endl;
                    print_results(locs, file);
                }

            }
            else if(j==2)
            {
                if(flag[0]=='&' && flag[1]=='&')
                {
                    Query q= Query(ret[0]) & Query(ret[1]) & Query(ret[2]) ;
                    const line_nums &locs = q.eval(file);
                    cout<<endl<<"Executed Query for: " << q <<endl;
                    print_results(locs, file);
                }
                else if(flag[0]=='&' && flag[1]=='|')
                {
                    Query q= Query(ret[0]) & Query(ret[1]) | Query(ret[2]) ;
                    const line_nums &locs = q.eval(file);
                    cout<<endl<<"Executed Query for: " << q <<endl;
                    print_results(locs, file);
                }
                else if(flag[0]=='|' && flag[1]=='&')
                {
                    Query q= Query(ret[0]) | Query(ret[1]) & Query(ret[2]) ;
                    const line_nums &locs = q.eval(file);
                    cout<<endl<<"Executed Query for: " << q <<endl;
                    print_results(locs, file);
                }
                else if(flag[0]=='|' && flag[1]=='|')
                {
                    Query q= Query(ret[0]) | Query(ret[1]) | Query(ret[2]) ;
                    const line_nums &locs = q.eval(file);
                    cout<<endl<<"Executed Query for: " << q <<endl;
                    print_results(locs, file);
                }
            }
        }

    }
    return 0;
}
