#include <iostream>
using namespace std;

void inverseOutput(char *str)
{
	char *pstr = str+strlen(str)-1;
	while (pstr>=str)
		cout<<*pstr--;
}


int main()
{
	inverseOutput("This is a test string!");

	return 0;
}
