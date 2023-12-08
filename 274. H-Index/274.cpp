#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i = 1, h = citations.size();
        sort(citations.begin(), citations.end());

        for(int i = 0; i < citations.size(); i++){
            if(citations[i] >= h){
                return h;
            }
            else if(h == 1 && citations[i] != 0){
                return 1;
            }
            else{
                h--;
            }
        }
        return 0;
    }
};

int main(){
    Solution v1;
    vector<int> citations = {1,2,3,4};
    cout << v1.hIndex(citations);
    return 0;
}