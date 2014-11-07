#include <iostream.h>
const float PI=3.1416;
float fCir_L(float x)
{
	float z=-1.0;
	if(x>=0.0)
		z=2*PI*x;
	return z;
}
float fCir_S(float x)
{
	float z=-1.0;
	if(x>=0.0)
		z=PI*x*x;
	return z;
}

int main()
{
	float r,l,s;
	cout<<"R=";
	cin>>r;
	l=fCir_L(r);
	s=fCir_S(r);
	cout<<l<<endl;
	cout<<s<<endl;
	return 0;
}



