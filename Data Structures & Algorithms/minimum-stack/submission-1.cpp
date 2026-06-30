class MinStack {
public:
    stack<int> st;
    stack<int> mins;

    MinStack() {
    }
    
    void push(int val) {
        if (mins.empty() || val <= mins.top()) mins.push(val);
        st.push(val);
    }
    
    void pop() {
        if (st.top() == mins.top()) mins.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mins.top();
    }
};
