#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    char ch[] = "123456";
    int num;

    num = atoi(ch);
	cout << num << endl;

    num = 123456;
    itoa(num, ch, 10);
    cout<<ch<<endl;

    return 0;
}