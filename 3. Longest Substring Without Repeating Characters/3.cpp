#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> hash;
        int count = 0, size, j=0;
        for(int i=0; i<s.size(); i++){
            while(j<s.size()){
                if(find(hash.begin(), hash.end(), s[j]) != hash.end()){
                    hash.clear();
                    break;
                }else{
                    hash.push_back(s[j]);
                    size = hash.size();
                    count = max(count, size);
                    j++;
                }
            }
        }
        return count;
    }
};

int main(){
    Solution v1;
    string s = "abcabcbb";
    cout << v1.lengthOfLongestSubstring(s) << endl;
    return 0;
} 