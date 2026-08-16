#include <bits/stdc++.h>

class MyHashSet {
public:
    int ar[10000000];
    MyHashSet() {
        memset(ar,-1,sizeof(ar));
        
    }
    
    void add(int key) {
        ar[key]=1;
        
    }
    
    void remove(int key) {
        ar[key]=-1;
    }
    
    bool contains(int key) {
        return(ar[key]==1);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */