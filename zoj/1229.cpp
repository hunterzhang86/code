#include <iostream>
#include <math.h>
using namespace std;

const int MAX=10000,MAXK=8;

int main()
{
	int a,b,k,ca,temp;
	while((cin>>a>>b>>k)&&(a!=0||b!=0))
	{
		for(ca=0,temp=1;ca<k;ca++)
		temp=temp*10;
		if(a>=MAX||b>=MAX||k>=8) {cout <<"输入有误，请重新输入！"<<endl; continue;}
		else if(a%temp==b%temp)
			cout <<"-1"<<endl;
			else cout <<a+b<<endl;
		}
		return 0;
}
