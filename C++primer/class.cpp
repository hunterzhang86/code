#include <iostream>
using namespace std;

class Person{
public:
    Person(const string &nm,const string &ad):
        name(nm),address(ad)
        {

        }
    string getName() const
    {
        return name;
    }
    string getAddress() const
    {
        return address;
    }
private:
    string name;
    string address;
};

int main()
{
    return 0;
}
