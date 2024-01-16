#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = haystack.find(needle);
        return found;
    }
};

int main(){
    Solution v1;
    string haystack = "leetcode", needle = "leeto";
    cout << v1.strStr(haystack, needle) << endl;
    return 0;
}