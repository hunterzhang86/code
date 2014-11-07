#include <set>
#include <string>
#include <iostream>
using namespace std;
struct Info
{
	string name;
	float score;
	bool operator<(const Info &a)const
	{
		//按score由小到大排列
		return a.score<score;
	}
};

int main(int argc,char* argv[])
{
	set<Info> s;
	Info info;
	info.name="Jack";
	info.score=80.5;
	s.insert(info);
	info.name="Tomi";
	info.score=20.5;
	s.insert(info);
	info.name="Nacy";
	info.score=60.5;
	s.insert(info);
	set<Info>::iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<(*it).name<<" : "<<(*it).score<<endl;
	}
	return 0;
}