#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump = nums[0];
        for(int i = 1; i < nums.size(); i++){
            jump--;
            if(jump < 0){
                return false;
            }
            else if(nums[i] > jump){
                jump = nums[i];
            }
        }
        return true;
    }
};

int main(){
    Solution v1;
    vector<int> nums={0,1};
    cout << v1.canJump(nums) << endl;
    return 0;
}