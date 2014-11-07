#include <fstream>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if(n==1)	return false;
	if(n!=2&&n%2==0)	return false;
	for(int i=3;i*i<n;i=i+2)
	{
		if(n%i==0)	return false;
	}
	return true;
}

bool isSym(int n)
{
	if(n<12&&n!=10)	return true;
	if(n>100&&n<1000&&n/100==n%10)	return true;
	if(n>10000&&n/1000==n%10*10+n/10%10)	return true;
	return false;
}

int main(int argc,char* argv[])
{
	ifstream cin("aaa.txt");
	int n;
	while(cin>>n)
	{
		cout<<(n<100000&&isSym(n)&&isPrime(n)?"Yes\n":"No\n");
	}
	return 0;

}