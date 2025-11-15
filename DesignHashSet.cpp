class MyHashSet {
    vector<bool> array;
public:
    MyHashSet() {
        array.assign(1000001, false);
    }
    
    void add(int key) {
        if (key >= 0 && key <= 1000000)
            array[key] = true;
    }
    
    void remove(int key) {
        if (key >= 0 && key <= 1000000)
            array[key] = false;
    }
    
    bool contains(int key) {
        if (key >= 0 && key <= 1000000)
            return array[key];
        return false;
    }
};
