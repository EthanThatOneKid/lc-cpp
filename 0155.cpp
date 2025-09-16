class MinStack {
    public:
        MinStack() {}
        
        void push(int val) {
            data.push({val, min(val, data.empty() ? val : data.top().second)});
        }
        
        void pop() {
            data.pop();
        }
        
        int top() {
            return data.top().firdata;
        }
        
        int getMin() {
            return data.top().second;
        }
    
    private:
        dataack<pair<int, int>> data; // {val, min}
    };
    
    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(val);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */