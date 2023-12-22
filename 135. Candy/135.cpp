#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int out = 0;
        vector<int> arr;
        for(int i = 0; i < ratings.size(); i++){
            arr.push_back(1);
        }

        for(int i = 1; i < ratings.size(); i++){
            if(ratings[i] > ratings[i-1]){
                arr[i] = arr[i-1]+1;
            }
        }
        for(int i = ratings.size()-2; i >= 0; i--){
            if(ratings[i] > ratings[i+1]){
                arr[i] = max(arr[i], arr[i+1]+1);
            }
        }
        for(int i = 0; i < arr.size(); i++){
            out += arr[i];
        }
        return out;
    }
};

int main(){
    vector<int> ratings = {1,3,4,5,2};
    Solution v1;
    cout << v1.candy(ratings);
    return 0;
}