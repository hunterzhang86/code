//#include "stdafx.h"
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main(int argc, char* argv[])
{
	vector<int> v;
	int i;
	for(i=0;i<10;i++)
	{
		v.push_back(i);
	}
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout <<*it<<" ";
	}
	cout <<endl;
	cout <<accumulate(v.begin(),v.end(),0)<<endl;
	getchar();
	return 0;

}
