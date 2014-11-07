#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool Comp(const int &a,const int &b)
{
	if(a!=b) return a>b;
	else return a>b;
}

int main(int argc,char *argv[])
{
	vector<int> v;
	int i;
	for(i=0;i<10;i++)
	{
		v.push_back(i);
	}
	for(i=0;i<10;i++)
	{
		cout<<v[i]<<" ";
	}
	cout <<endl;
	sort(v.begin(),v.end(),Comp);
	for(i=0;i<10;i++)
	{
		cout <<v[i]<<" ";
	}
	cout <<endl;
	getchar();
	return 0;

}