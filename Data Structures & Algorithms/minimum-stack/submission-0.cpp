class MinStack {
public:
stack<int>st;
stack<int>pt;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!pt.empty()){
           val=min(val,pt.top());
        }
        pt.push(val);
    }
    
    void pop() {
        st.pop();
        pt.pop();
    }
    
    int top() {
       return st.top(); 
    }
    
    int getMin() {
        return pt.top();
    }
};
