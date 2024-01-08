#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    //wrong solution
    string convert(string s, int numRows) {
        string ans;
        int x = 2*numRows-2, main = 2*numRows-2;
        if(numRows <= 1) return s;
        for(int i = 0; i < numRows; i++){
            ans += s[i];
            for(int j = i+x; j < s.length(); j=j+x){
                if(x != 0){
                    ans += s[j];
                }
                x = 2*numRows-2 - x;
            }
            main = main -2;
            x = main;
        }
        return ans;
    }
    //correct solution
    string convert2(string s, int numRows) {
        if(numRows <= 1) return s;

        vector<string>v(numRows, ""); 
        int j = 0, dir = -1;

        for(int i = 0; i < s.length(); i++)
        {
            if(j == numRows - 1 || j == 0) dir *= (-1); 
            v[j] += s[i];
            if(dir == 1) j++;
            else j--;
        }

        string res;
        
        for(auto &it : v) res += it; 
        return res;
    }
};
    
int main(){
    Solution v1;
    string s = "A";
    int numRows = 1;
    cout << v1.convert2(s, numRows) << endl;
    return 0;
}