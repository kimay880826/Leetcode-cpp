#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int str1=0, str2=0, count=INT_MAX;
        int goal = nums[str1];

        while(str1 < nums.size()){
            if(str2 == nums.size()-1 && goal < target) break;
            else if(nums[str1] == target) return 1;
            else if(goal >= target) {
                count = min(count, str2-str1+1);
                goal -= nums[str1];
                str1++; 
            }else if(goal < target){
                str2++;
                goal += nums[str2];
            }
        }

        if(str1 == 0) return 0;
        else return count;
    }
};


int main(){
    Solution v1;
    int target = 7;
    vector<int> nums = {2,3,1,2,4,3};
    cout << v1.minSubArrayLen(target, nums) << endl;
    return 0;
}