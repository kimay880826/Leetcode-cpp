#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
    public:
        bool canConstruct(string ransomNote, string magazine){
            unordered_map<char, int> hashmap;
            for(int i=0; i<ransomNote.size(); i++){
                if(hashmap.find(ransomNote[i]) == hashmap.end()){
                    hashmap[ransomNote[i]] = 1;
                }
                else if(hashmap.find(ransomNote[i]) != hashmap.end()){
                    hashmap[ransomNote[i]] += 1;
                }
            }
            for(int i=0; i<magazine.size(); i++){
                if(hashmap.find(magazine[i]) != hashmap.end()){
                    hashmap[magazine[i]] -= 1;
                }
                if(hashmap[magazine[i]] == 0){
                    hashmap.erase(magazine[i]);
                }
            }
            if(hashmap.empty()) {
                return true;
            }
            return false;
        }
};

int main(){
    string ransomNote="aa", magazine="aab";
    Solution v1;
    cout << v1.find(ransomNote, magazine);
}