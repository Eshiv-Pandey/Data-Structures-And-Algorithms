class MinStack {
public:
    stack<long long> st;
    long long mini=INT_MAX;
    MinStack() {
    }
    
    void push(int value) {
        if(st.empty()){ 
            st.push(value);
            mini=value;
        }else{
            if(value<mini) {
                long long newval=value-mini+value;
                st.push(newval);
                mini=value;
            }else st.push(value);
        }
    }
    
    void pop() {
        if(st.top()>mini) st.pop();
        else{
            mini=2*mini-st.top();
            st.pop();
        }
    }
    
    int top() {
        if(st.top()>mini) return st.top();
        else return int(mini);
    }
    
    int getMin() {
        return int(mini);
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */