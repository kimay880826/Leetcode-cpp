#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> hash1, hash2;
        for(int i=0; i<s.size(); i++){
            if(hash1.find(s[i]) != hash1.end() 
                                        && hash1[s[i]] != t[i]){
                return false;
            }else if(hash2.find(t[i]) != hash2.end() 
                                        && hash2[t[i]] != s[i]){
                return false;
            }else if(hash1.find(s[i]) == hash1.end() 
                            && hash2.find(t[i]) == hash2.end()){
                hash1[s[i]]=t[i];
                hash2[t[i]]=s[i];
            }
        }
        return true;
    }
};

int main(){
    string ransomNote="badc", magazine="baba";
    Solution v1;
    cout << v1.isIsomorphic(ransomNote, magazine);
    return 0;
}