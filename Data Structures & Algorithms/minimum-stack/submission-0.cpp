class MinStack {
     stack<int>st; 
      stack<int>minstack2; 
public:
    MinStack() {
     
    }
    
    void push(int val) {
        st.push(val);
        if(minstack2.empty() || val<minstack2.top())
        minstack2.push(val);
        else
        minstack2.push(minstack2.top());
    }
    
    void pop() {
        if(!st.empty())
        st.pop();
        minstack2.pop();
    }
    
    int top() {
       if(!st.empty())
      return st.top(); 
    }
    
    int getMin() {
        return minstack2.top();
    }
};
