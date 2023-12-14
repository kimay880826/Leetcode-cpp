#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ALL = nums[0], count = 0;
        vector<int> arr;
        if(ALL == 0){
            count++;
            ALL = 1;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
            }
            if(count < 2 && nums[i] != 0){
                ALL = ALL * nums[i];  
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                arr.push_back(ALL/nums[i]);
            }
            else if(count == 1 && nums[i] == 0){
                arr.push_back(ALL);
            }
            else if(count == 1 && nums[i] != 0){
                arr.push_back(0);
            }
            else if(count >= 2){
                arr.push_back(0);
            }
        }
        return arr;
    }
};

int main(){
    Solution v1;
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> out = v1.productExceptSelf(nums);
    for(int i = 0; i < out.size(); i++){
        cout << out[i] << " ";
    }
    return 0;
}