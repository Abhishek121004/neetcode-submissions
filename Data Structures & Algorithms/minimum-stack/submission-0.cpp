class MinStack {
public:
stack<int> stk;
stack<int> minStk;

    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minStk.empty())
        minStk.push(val);
        else
        minStk.push(min(val, minStk.top()));
    }
    
    void pop() {
        auto x = stk.top();
        stk.pop();
        minStk.pop();
    }
    
    int top() {
        auto x = stk.top();
        return x;
    }
    
    int getMin() {
        auto x = minStk.top();
        return x;
    }
};
