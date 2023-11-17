#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
            }
        }
        return out;
    }
};

int main(){
    int target = 6;
    Solution v1;
    vector<int> nums = {3,3}, out = v1.twoSum(nums, target);
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << " ";
    }
    return 0;
}