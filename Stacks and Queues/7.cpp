class MinStack {
public:
    stack <int> mins;
    stack<int> st;
    MinStack() {}
    
    void push(int val) {
        if(mins.empty() || mins.top()>=val)
        {
        st.push(val);
        mins.push(val);
        }    
        else
        {
            st.push(val);
        }   
    }
    
    void pop() {
        if(st.top() == mins.top())
        {
        st.pop();
        mins.pop();
        }
        else
        {
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
