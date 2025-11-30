class CustomStack {
    vector<int> stack;
    int maxsize;
    int currsize;
public:
    CustomStack(int maxSize) {
        maxsize = maxSize;
        currsize = 0;
    }
    
    void push(int x) {
        if(currsize == maxsize)
            return;

        stack.push_back(x);
        currsize++;    
    }
    
    int pop() {
        if(currsize == 0) 
            return -1;

        int temp = stack[currsize -1];
        stack.pop_back();
        currsize--;    
        return temp;
    }
    
    void increment(int k, int val) {
        for(int i = 0; i < min(currsize, k); i++)
            stack[i] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */