#include <iostream>
using namespace std;

bool test(int i,int j)
{
	int t[10]={0};
	int ia=0;
	while(i){
		t[ia++]=i%10;
		i=i/10;
	}
	while(j){
		t[ia++]=j%10;
		j=j/10;
	}
	for(int m=0;m<10;++m)
		for(int n=m+1;n<10;++n)
			if(t[n]==t[m])	return false;
	return true;
}


int main()
{
	int n,k;
	while(cin>>n&&n>=2&&n<=79){
		k=1234;
		while(k<=98765){
			int j=k*n;
			if(j<100000){
				if(test(j,k)){
					cout<<j<<"/";
					if(k<10000)	cout<<"0";
					cout<<k<<"="<<n<<endl;
				}
		
			}
			++k;
		}
	}
	return 0;
}