#include <set>
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	set<int> s;
	s.insert(8);
	s.insert(1);
	s.insert(12);
	s.insert(6);
	s.insert(8);
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;

}