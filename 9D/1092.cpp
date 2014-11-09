#include <iostream>
#include <fstream>
using namespace std;

int Fibonacci(int num)
{
	if(num == 0)
		return 0;
	else if(num == 1)
		return 1;

	return Fibonacci(num-1) + Fibonacci(num-2);
}

int main()
{
	freopen("1092.in","r",stdin);
	int num;
	while(cin>>num)
	{
		cout<<Fibonacci(num)<<endl;
	}

	return 0;
}