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
            cout<<"ѧ�ţ�";
            cin>>no;
            cout<<"������";
            cin>>name;
            cout<<"��ѧ�ɼ���";
            cin>>degree.math;
            cout<<"Ӣ��ɼ���";
            cin>>degree.english;
            cout<<"����ɼ���";
            cin>>degree.phy;
        }
        void display()
        {
            cout<<endl;
            cout<<"ѧ�ţ�"<<no<<endl;
            cout<<"������"<<name<<endl;
            cout<<"��ѧ�ɼ���"<<degree.math<<endl;
            cout<<"Ӣ��ɼ���"<<degree.english<<endl;
            cout<<"����ɼ���"<<degree.phy<<endl;
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
