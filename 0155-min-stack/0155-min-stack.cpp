class MinStack {
public:
    vector<int> stk;
    vector<int> minstk;
    int topIndex;
    int minIndex;
    MinStack() {
        topIndex=-1;
        minIndex=-1;
    }
    
    void push(int value) {
        stk.push_back(value);
        topIndex++;
        if (minstk.empty()) {
            minstk.push_back(value);
            minIndex++;
        }

        else if (value <= minstk[minIndex]) {
            minstk.push_back(value);
            minIndex++;
        }
    }
    
    void pop() {
        if (stk[topIndex]== minstk[minIndex]){
            minstk.pop_back();
            minIndex--;
        }
        stk.pop_back();
        topIndex--;
    }
    
    int top() {
        return stk[topIndex];
    }
    
    int getMin() {
        return minstk[minIndex];
        
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