class base
{
    public:
    base(int _r)
    {
        r = _r;
    }
protected:
    int r;
};

class A:public base
{
public:
    A(int _r):base(_r){};
};

int main()
{

  return 0;
}
