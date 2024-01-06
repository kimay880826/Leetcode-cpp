#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        string first = strs[0], last = strs[strs.size()-1];
        for(int i = 0; i < min(first.length(), last.length()); i++){
            if(first[i] == last[i]){
                ans += first[i];
            }else{
                return ans;
            }
        }
        return ans;
    }
};

int main(){
    vector<string> strs = {"flower","flow","flight"};
    Solution v1;
    cout << v1.longestCommonPrefix(strs) << endl;
    return 0;
}