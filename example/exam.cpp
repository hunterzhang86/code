#include <iostream>
using namespace std;

int main()
{
//	int a=2,b=5;
//	b++;
//	cout<<a+b<<endl;
	int i=3;
	cout<<i+++i<<endl;
	int a=2,b=3;
	b+=(++a)+(++a);
	cout<<b;
	return 0;
}