#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string word = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                word += s[i];
            }else if(s[i] == ' ' && word != ""){
                ans.insert(ans.begin(), word);
                word = "";
            }
        }
        if(word !=""){
            word += ' ';
        }
        for(int i = 0; i < ans.size(); i++){
            word += ans[i];
            word += ' ';
        }
        word.pop_back();
        return word;
    }

    string reverseWords2(string s) {
        int len=s.size()-1;
        string temp="";
        string ans="";
        for(int i=len;i>=0;i--){
            if(s[i]==' ' && temp!=""){
                reverse(temp.begin(),temp.end());
                ans+=temp+' ';
                temp="";
            }
            else{
                if(s[i]==' ')   continue;
                temp+=s[i];
            }
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        if(ans[ans.size()-1]==' ')
            //ans=ans.erase(ans.size()-1);
            ans.pop_back();
        return ans;
    }
};

int main(){
    string s = "  hello world  ";
    Solution v1;
    cout << v1.reverseWords(s) << endl;
    return 0;
}