#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        bool find(string ransomNote, string magazine){
            for(int i=0; i<ransomNote.size(); i++){
                for(int j=0; j<magazine.size(); j++){

                    if(j==magazine.size()-1 && magazine[j]!=ransomNote[i]){
                        return false;
                    }
                    else if(magazine[j]==ransomNote[i]){
                        magazine[j]=0;
                        break;
                    }  
                }
            }
            return true;
        }
};

int main(){
    string ransomNote="aa", magazine="aab";
    Solution v1;
    cout << v1.find(ransomNote, magazine);
}