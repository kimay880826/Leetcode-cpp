#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i = s.length()-1; i >= 0; i--){
            switch(s[i]){
                case 'I':
                    if(s[i+1] == 'V' || s[i+1] == 'X'){
                        ans -= 1;
                    }else ans += 1;
                    break;
                case 'V':
                    ans += 5;
                    break;
                case 'X':
                    if(s[i+1] == 'L' || s[i+1] == 'C'){
                        ans -= 10;
                    }else ans += 10;
                    break;
                case 'L':
                    ans += 50;
                    break;
                case 'C':
                    if(s[i+1] == 'D' || s[i+1] == 'M'){
                        ans -= 100;
                    }else ans += 100;
                    break;
                case 'D':
                    ans += 500;
                    break;
                case 'M':
                    ans += 1000;
                    break;
            }
        }
        return ans;
    }
};

int main(){
    Solution v1;
    string s = "MCMXCIV";
    cout << v1.romanToInt(s) << endl;
    return 0;
}