#include <iostream>
#include <fstream>
using namespace std;

class student{
    int no;
    char name[10];
    class cdegree
    {
    public:
        int math,english,phy;
    }degree;
    public:
        void getdata()
        {
            cout<<"学号：";
            cin>>no;
            cout<<"姓名：";
            cin>>name;
            cout<<"数学成绩：";
            cin>>degree.math;
            cout<<"英语成绩：";
            cin>>degree.english;
            cout<<"物理成绩：";
            cin>>degree.phy;
        }
        void display()
        {
            cout<<endl;
            cout<<"学号："<<no<<endl;
            cout<<"姓名："<<name<<endl;
            cout<<"数学成绩："<<degree.math<<endl;
            cout<<"英语成绩："<<degree.english<<endl;
            cout<<"物理成绩："<<degree.phy<<endl;
        }

};

int main()
{
    freopen("2.in","r",stdin);
    student stu;
    stu.getdata();
    stu.display();
    return 0;
}
