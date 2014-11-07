/*求最大公倍数*/

#include <iostream>
#include <fstream>
using namespace std;
int gcd(int,int);

int main(int argc,char* argv[])
{
	ifstream cin("aaa.dat");
	int x,y;
	while(cin>>x>>y){
		cout<<x/gcd(x,y)*y<<endl;
	}
	return 0;
}

int gcd(int x,int y)
{
	while(x!=y){
		if(x>y)	x=x-y;
		else	y=y-x;
	}
	return x;
}