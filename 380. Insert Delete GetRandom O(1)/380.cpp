#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class RandomizedSet {
public:
    vector<int> vals;
    unordered_map<int, int> val2pos;
    
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(val2pos.find(val) != val2pos.end()){
            return false;
        }
        
        vals.emplace_back(val);
        val2pos[val] = vals.size()-1;
        
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(val2pos.find(val) == val2pos.end()){
            return false;
        }
        
        if(vals.back() == val){
            vals.pop_back();
            val2pos.erase(val);
        }
        else{
            int last = vals.back(), newpos = val2pos[val];
            swap(vals.back(), vals[val2pos[val]]);
            vals.pop_back();
            val2pos[last] = newpos;
            val2pos.erase(val);
        }
        
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return vals[rand()%vals.size()];
    }
};

int main(){
    string nums[] = {"RandomizedSet", "insert", "remove",
                            "insert", "getRandom", "remove", "insert", "getRandom"};
    int m[8][1] = {{},{1},{2},{2},{},{1},{2},{}};

    return 0;
}