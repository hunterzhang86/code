#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int CountWord(string str,char word)
{
	int count = 0;

	for(int i=0;i<str.length();i++)
	{
		if(str[i] == word)
			count++;
	}

	return count;
}


int main()
{
	freopen("jszfgs.in","r",stdin);

	string str;
	char word;

	getline(cin,str);
	word = getchar();

	cout<<CountWord(str,word)<<endl;

	return 0;
}