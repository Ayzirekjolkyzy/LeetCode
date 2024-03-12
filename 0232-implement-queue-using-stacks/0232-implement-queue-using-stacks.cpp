class MyQueue {
    stack<int> a, b;
    int front;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(a.empty()) front=x;
        a.push(x);
    }
    
    int pop() {
        if(b.empty()) {
            while(!a.empty()) {
                int x=a.top();
                a.pop();
                b.push(x);
            }
        }
        int x=b.top();
        b.pop();
        return x;
    }
    
    int peek() {
        if(b.empty()) return front;
        return b.top();
    }
    
    bool empty() {
        return a.empty()&&b.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */