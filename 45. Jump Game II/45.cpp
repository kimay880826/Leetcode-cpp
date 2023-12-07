#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {

      for(int i = 1; i < nums.size(); i++){
        nums[i] = max(nums[i] + i, nums[i-1]);
        cout << nums[i] << " ";
      }

      int ind = 0;
      int ans = 0;

      while(ind < nums.size() - 1){
        ans++;
        ind = nums[ind];
      }

      return ans;
    }
};

int main(){
    Solution v1;
    vector<int> nums = {2,3,1,1,4};
    cout << v1.jump(nums) << endl;
    return 0;
}