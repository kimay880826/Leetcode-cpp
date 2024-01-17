#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0, ans=0;
        for(int i=0; i<t.size(); i++){
            if(s[0] == t[i]){
                s.erase(0,1);
            }
        }
        if(s == ""){
            return true;
        }else return false;
    }
};

int main(){
    string s = "abc", t = "ahbgdc";
    Solution v1;
    cout << v1.isSubsequence(s, t) <<endl;
    return 0;
}