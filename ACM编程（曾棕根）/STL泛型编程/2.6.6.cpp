#pragma warning(disable:4786)
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	map<char,int> m;
	for(int j=0;j<10;j++)
	{
		m['0'+j]=j;
	}
	string sa,sb;
	sa="6234";
	int i;
	int sum=0;
	for(i=0;i<sa.length();i++)
		sum+=m[sa[i]];
	cout<<"sum="<<sum<<endl;
	return 0;
}