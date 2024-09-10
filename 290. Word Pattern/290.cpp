#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int j=0;
        string x;
        unordered_map<char, string> hash; 
        for(int i=0; i<pattern.size(); i++){
            for(j; j<s.size(); j++){
                if(s[j] != ' '){
                    x += s[j];
                }else{
                    j++;
                    break;
                }
            }
            if(x=="") return false;
            else if(hash.find(pattern[i])!=hash.end() && hash[pattern[i]] != x){
                return false;
            }
            for(auto it=hash.begin(); it!=hash.end(); it++){
                cout << it->second << " " << it->first << endl;
                cout << x << " " << pattern[i] << endl;
                if(it->second == x && it->first != pattern[i]) return false;
            }
            hash[pattern[i]] = x;
            x="";
        }
        if(j!=s.size())return false;
        return true;
    }
};

int main(){
    Solution v1;
    string pattern="he", s="unit";
    cout << v1.wordPattern(pattern, s) << endl;
    return 0;
}