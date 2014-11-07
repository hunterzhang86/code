#include <iostream>
using namespace std;

class Complex
{
public:
	Complex()
	{
		real=0;
		imag=0;
	}
	Complex(double r,double i)
	{
		real=r;
		imag=i;
	}
	Complex operator+(Complex &c2);
	Complex operator-(Complex &c2);
	Complex operator*(Complex &c2);
	Complex operator/(Complex &c2);
	void display();
private:
	double real;
	double imag;
};

/*double Complex::get_real()
{
	return real;
}

double Complex::get_imag()
{
	return imag;
}*/

void Complex:: display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

Complex Complex::operator+(Complex &c2)
{
	//return Complex(c1.get_real()+c2.get_real(),c1.get_imag()+c2.get_imag());
	Complex c;
	c.real =real+c2.real ;
	c.imag =imag+c2.imag ;
	return c;
}

Complex Complex::operator-(Complex &c2)
{
	//return Complex(c1.get_real()+c2.get_real(),c1.get_imag()+c2.get_imag());
	Complex c;
	c.real =real-c2.real ;
	c.imag =imag-c2.imag ;
	return c;
}

Complex Complex::operator*(Complex &c2)
{
	//return Complex(c1.get_real()+c2.get_real(),c1.get_imag()+c2.get_imag());
	Complex c;
	c.real =real*c2.real-imag*c2.imag ;
	c.imag =imag+c2.real+real*c2.imag ;
	return c;
}

Complex Complex::operator/(Complex &c2)
{
	//return Complex(c1.get_real()+c2.get_real(),c1.get_imag()+c2.get_imag());
	Complex c;
	c.real =(real*c2.real +imag*c2.imag )/(c2.real *c2.real +c2.imag *c2.imag );
	c.imag =(imag*c2.real-real*c2.imag )/(c2.real *c2.real +c2.imag *c2.imag );
	return c;
}



int main()
{
	Complex c1(3,4),c2(5,-10),c3;
	c3=c1+c2;
	c3.display();
	c3=c1-c2;
	c3.display();
	c3=c1*c2;
	c3.display();
	c3=c1/c2;
	c3.display();
	return 0;

}