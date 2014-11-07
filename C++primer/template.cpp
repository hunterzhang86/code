#include <iostream>
#include <string>
using namespace std;

template <typename T>

int compare(const T &t1, const T &t2)
{
    if(t1 < t2)   return -1;
    if(t2 < t2)   return 1;
    return 0;
}

template <typename T>
inline T min1(const T &t1, const T &t2)
{
    if(t1 < t2) return t1;
    return t2;
}

void test1()
{
    cout<<compare(1,2)<<endl;
    string s1="if", s2="in";
    cout<<compare(s1, s2)<<endl;
}

void test2()
{
    cout<<min1(1, 2)<<endl;
    string s1="if", s2="in";
    cout<<min1(s1, s2)<<endl;
}


template <class Type>
class Queue{
public:
    Queue();
    Type &front();
    const Type &front () const;
    void push(const Type &);
    void pop();
    bool empty() const;
};


void test3()
{
    Queue<int> *q;
}

int main()
{
    return 0;
}
