class MinStack {
public:
    void push(int x) {
    	m_data.push(x);

    	if(m_min.empty() == true)
    		m_min.push(x);
    	else if(m_min.top() >= x)
    		m_min.push(x);

    	return;
    }

    void pop() {
    	if(m_data.empty() == false)
    	{
	    	if(m_data.top() == m_min.top())
	    	{
		    	m_data.pop();
		    	m_min.pop();
	    	}
	    	else
	    	{
	    		m_data.pop();
	    	}
    	}

    	return;
    }

    int top() {
    	return m_data.top();
    }

    int getMin() {
    	return m_min.top();
    }

private:
	stack<int> m_data;	//数据栈
	stack<int> m_min;	//辅助栈
};