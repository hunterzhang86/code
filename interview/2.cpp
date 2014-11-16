#include <iostream>
using namespace std;

int main()
{
    char a = 1;
    char c[] = "1234567890";
    char *p = (char *)"1234567890";
    a = c[1];
    a = p[1];
    return 0;
}