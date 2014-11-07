#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char* argv[])
{
	ifstream cin("aaa.txt");
	int n,x;
	double sum;
	cout.precision(3);
	while(cin>>n){
		sum=0;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			sum=sum+x;
		}
		cout<<fixed<<sum/n<<endl;
	}
	return 0;
}