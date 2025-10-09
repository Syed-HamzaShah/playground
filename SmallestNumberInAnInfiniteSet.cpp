class SmallestInfiniteSet {
    priority_queue<int, vector<int>, greater<int>> heap;
    set<int> s;
    int curr;
    
public:
    SmallestInfiniteSet() {
        curr = 1;
    }
    
    int popSmallest() {
        if(!heap.empty()){
            int temp = heap.top();
            heap.pop();
            s.erase(temp);
            return temp;
        }
        curr++;
        return curr - 1;
    }
    
    void addBack(int num) {
        if(num < curr && s.find(num) == s.end()){
            heap.push(num);
            s.insert(num);   
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */