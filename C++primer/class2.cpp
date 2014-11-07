#include <iostream>
using namespace std;

class Screen{
    friend class Window;
    typedef string::size_type index;
private:
    string contents;
    index cursor;
    index height, width;
};

class Window{
public:
    Window& relocate(Screen::index ,Screen::index ,Screen&);
};

Window& Window::relocate(Screen::index r, Screen::index c, Screen& s)
{
    s.height += r;
    s.width += c;
    return *this;
}

int main()
{
    return 0;
}
