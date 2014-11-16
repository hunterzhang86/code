/*
	未完成！！
*/

#include <iostream>
#include <fstream>
#include <exception>
#include <string.h>
#include <stack>
using namespace std;

template <typename T> class CQueue
{
public:
	CQueue(void);
	~CQueue(void);

	void appendTail(const T& node);
	T deleteHead();
private:
	stack<T> stack1;
	stack<T> stack2;
};

template<typename T> void CQueue<T>::appendTail(const T& element)
{
	stack1.push(element);
}

template<typename T> T CQueue<T>::deleteHead()
{
	if(stack2.size()<=0)
	{
		while(stack1.size()>=0)
		{
			T& data=stack1.top();
			stack2.push(data);

		}
	}

	if(stack2.size()==0)
		throw exception("queue is empty");

	T head=stack2.top();
	stack2.pop();

	return head;
} 

char str[100001][100];

int main()
{
	freopen("1512.in","r",stdin);
	int count;
	if(cin>>count)
	{
		for(int i=0;i<count;i++)
		{
			gets(str[i]);
			if(strcmp(str[i],"POP")==0)
				deleteHead();
			else
			{
				//for(int i=0;str)
				appendTail(*str[i]);
			}
		}
	}
	return 0;
}