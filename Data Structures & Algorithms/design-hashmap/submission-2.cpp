class MyHashMap {
public:
    vector<int>lol;
    MyHashMap() {

        lol.resize(1000004, -1);
    }
    
    void put(int key, int value) {
        lol [key] = value;

        
    }
    
    int get(int key) {
        return lol[key];
        
    }
    
    void remove(int key) {
         lol[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */