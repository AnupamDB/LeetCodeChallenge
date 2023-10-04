class MyHashMap {
public:
    map<int,int> map;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        map[key]=value;
    }
    
    int get(int key) {
        return map.find(key)!=map.end()?map[key]:-1;
    }
    
    void remove(int key) {
        map.erase(key);
    }
};
