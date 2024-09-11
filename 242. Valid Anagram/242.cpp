#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hash;
        if(s.size()!=t.size()) return false;
        for(int i=0; i<s.size(); i++){
            hash[s[i]]+=1;
        }
        for(int i=0; i<t.size(); i++){
            if(hash.find(t[i])==hash.end()) return false;
            else if(hash[t[i]]==0) return false;
            else if(hash[t[i]]>0) hash[t[i]]--;
        }
        return true;
    }
};

int main(){
    Solution v1;
    string s="anagram", t="nagaram";
    cout << v1.isAnagram(s,t) << endl;
    return 0;
}