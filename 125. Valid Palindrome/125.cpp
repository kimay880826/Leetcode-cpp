#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string arr;
        for(int i=0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                arr+=s[i]+('a'-'A');
            }else if(s[i] >= 'a' && s[i] <= 'z'){
                arr+=s[i];
            }else if(s[i] >= '0' && s[i] <= '9'){
                arr+=s[i];
            }
        }
        for(int i=0; i < arr.size()/2; i++){
            if(arr[i] != arr[arr.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution v1;
    string s = "A man, a plan, a canal: PanamA";
    cout << v1.isPalindrome(s) << endl;
    return 0;
}