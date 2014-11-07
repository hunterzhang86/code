#include <iostream>
#include <fstream>
using namespace std;

struct Data{
    int ival;
    char *ptr;
};

void test()
{
    Data val1 = {0,0};
    Data val2 = {1024, "Yes"};
}

int main()
{
    test();
    return 0;
}
