#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string convertToString(double x)
{
	ostringstream o;
	if(o<<x)
		return o.str();
	return "conversion error";
}

double convertFromString(const string &s)
{
	istringstream i(s);
	double x;
	if(i>>x)
		return x;
	return 0.0;
}

int main(int argc,char* argv[])
{
	//将数值转换成string的第一种方法：C方法
	char b[10];
	string a;
	sprintf(b,"%d",1975);
	a=b;
	cout<<a<<endl;
	//将数值转换成string的第二种方法：C++方法
	string cc=convertToString(1976);
	cout<<cc<<endl;
	//将string转换成数值的方法：C++方法
	string dd="2006";
	int p=convertFromString(dd)+2;
	cout <<p<<endl;
	return 0;

}