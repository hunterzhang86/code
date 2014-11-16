#include <iostream>
#include <stack>
#include <cassert>
#include <fstream>
using namespace std;

template <typename T> class StackWithMin
{
public:
    StackWithMin(void) {}
    virtual ~StackWithMin(void) {}

    T &top(void);
    const T &top(void) const;

    void push(const T &value);
    void pop(void);

    const T &min(void) const;

    bool empty() const;
    size_t size() const;

private:
    std::stack<T>   m_data;     // 数据栈，存放栈的所有元素
    std::stack<T>   m_min;      // 辅助栈，存放栈的最小元素
};

template <typename T> void StackWithMin<T>::push(const T &value)
{
    m_data.push(value);

    if (m_min.size() == 0 || value < m_min.top())
        m_min.push(value);
    else
        m_min.push(m_min.top());
}

template <typename T> void StackWithMin<T>::pop()
{
    assert(m_data.size() > 0 && m_min.size() > 0);

    m_data.pop();
    m_min.pop();
}

template <typename T> const T &StackWithMin<T>::min() const
{
    assert(m_data.size() > 0 && m_min.size() > 0);

    return m_min.top();
}

template <typename T> const T &StackWithMin<T>::top() const
{
    return m_data.top();
}

template <typename T> bool StackWithMin<T>::empty() const
{
    return m_data.empty();
}

int main()
{
    freopen("21.in", "r", stdin);

    int len;
    char ch[10];
    StackWithMin<int> stackTemp;

    while (scanf("%d", &len) != EOF)
    {
        while(len--)
        {
            scanf("%s", ch);
            if (ch[0] == 's')
            {
                int number;
                scanf("%d", &number);

                stackTemp.push(number);
            }

            else if (ch[0] == 'o')
            {
                stackTemp.pop();
            }

            if (!stackTemp.empty())
                printf("%d\n", stackTemp.min());
            else
                printf("NULL\n");
        }
    }

    return 0;
}