#include <fstream>
#include <string>
using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr == 1) ? word : word+ending;
}

ifstream &open_file(ifstream &in, const string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}
