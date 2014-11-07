#include <iostream>
using namespace std;

bool huiwen(int n){
	int i,j,a[30],s;
	int total=0;
	for(int base=2;base<=10;base++){
		i=1;
		s=n;
		while(s){
			a[i]=s%base;
			s=s/base;
			i++;
		}
		i--;
		for(j=1;j<=i/2;j++)
			if(a[j]!=a[i-j+1])	break;
			if(j>i/2)	total++;
			if(total>=2)	return true;
	}
	return false;
}

int main()
{
	int s;
	while(scanf("%d",&s)==1){
		for(s=s+1;;s++){
			if(huiwen(s)){
				cout<<s<<endl;
				break;
			}
		}
	}
	return 0;
}