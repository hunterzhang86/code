/*只能是十个数*/

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("hebing.dat");
	int v[10];
	int i=0,j=0;
	while(!fin.eof())
	{
		int temp;
		fin>>temp;
		v[i]=temp;
		i++;
	}

	for(i=0;i<sizeof(v)/sizeof(v[0]);i++)
		cout<<v[i]<<" ";
	cout<<endl;
	for(j=0;j<sizeof(v)/sizeof(v[0]);j++)
		cout<<v[j]<<" ";
	cout<<endl;
	getchar();
	return 0;
	
}

