#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int out = 0, first = 0;
        for(int i = s.length()-1; i >= 0; i--){
            if(first == 1 && s[i] == ' '){
                break;
            }else if(first == 0 && s[i] != ' '){
                first = 1;
                out++;
            }else if(first == 1){
                out++;
            }
        }
        return out;
    }
};

int main(){
    Solution v1;
    string s = "luffy is still joyboy";
    cout << v1.lengthOfLastWord(s) << endl;
    return 0;
}