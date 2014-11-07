#include <iostream>
#include <memory>

using namespace std;

class A{
public:
	A(){cout<<"A()"<<this<<endl;}
	~A(){cout<<"~A()"<<this<<endl;}
};

class B{
public:
	B(){cout<<"B()"<<this<<endl;}
	~B(){cout<<"~B()"<<this<<endl;}
};

int main()
{
	try{
		auto_ptr<A> p(new A);
		B* q(new B);
		int n;
		cin >> n;
		if(n<0)
			throw 123;
		cout << "n=" << n << endl;
		delete q;
	}
	catch(int e){
		cout << "exception: " << e << endl;
	}
	return 0;
}
