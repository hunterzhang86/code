#include <iostream>
#include <fstream>
using namespace std;

class Screen{
public:
    typedef string::size_type index;
    Screen& move(index r,index c);
    Screen& set(char);
    Screen& set(index, index, char);

    index get_cursor() const;

    Screen& display(ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen& display(ostream &os) const
    {
        do_display(os);
        return *this;
    }

    const void print()
    {
        cout<<"yes"<<endl;
    }

private:
    string contents;
    index cursor;
    index height, width;

    void do_display(ostream &os) const
    {
        os<<contents;
    }
};

inline Screen::index Screen::get_cursor() const
{
    return cursor;
}

Screen& Screen::set(char c)
{
    contents[cursor]=c;
    return *this;
}

Screen& Screen::move(index r, index c)
{
    index row = r * width;
    cursor = row + c;
    return *this;
}

class LinkScreen{
    Screen window;
    LinkScreen *next;
    LinkScreen *prev;
};

int main()
{
    Screen myScreen;
    myScreen.move(4,0);
    //myScreen.move(4, 0).set('#').display();
    myScreen.print();
    return 0;
}
