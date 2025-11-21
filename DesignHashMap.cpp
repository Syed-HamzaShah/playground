class MyHashMap {
    vector<int> array;
public:
    MyHashMap() {
        array.assign(1000001, -1);
    }
    
    void put(int key, int value) {
        if(key >= 0 || key <= 1000000)
        array[key] = value;
    }
    
    int get(int key) {
        if(key >= 0 || key <= 1000000)
        return array[key];
    }
    
    void remove(int key) {
        if(key >= 0 || key <= 1000000)
        array[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */