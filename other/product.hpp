#include <iostream>
#include <fstream>
using namespace std;

class Product{
public:
    Product(){};
    Product(int m,int q,float p):num(m),quantity(q),price(p){};
    void total();
    static float average();
    static void display();
private:
    int num;
    int quantity;
    float price;
    static float discount;
    static float sum;
    static int n;
};

void Product::total()
{
    float rate=1.0;
    if(quantity>10)
        rate=0.98*rate;
    sum=sum+quantity*price*rate*(1-discount);
    n=n+quantity;
}

float Product::average()
{
    return sum/n;
}

void Product::display()
{
    cout<<sum<<endl;
    cout<<average()<<endl;
}

float Product::discount=0.05;
float Product::sum=0;
int Product::n=0;

/*int main()
{
    freopen("cpp.in","r",stdin);
    int  num,quantity;
    float price;
    Product P[N];
    int i=0;
    while(cin>>num>>quantity>>price)
    {
        P[i++]=Product(num,quantity,price);
    }
    for(i=0;i<N;i++)
        P[i].total();
    Product::display();
    return 0;
}
*/
