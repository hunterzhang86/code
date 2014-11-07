#include <fstream>
#include <iostream>
using namespace std;

int main(int argc,char*argv[])
{
	ifstream cin("aaa.txt");
	int n;
	while(cin>>n){
		cout<<n*n<<endl;
	}
	return 0;
}