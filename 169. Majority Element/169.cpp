#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Just sort and return middle nums
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};

int main(){
    Solution v1;
    vector<int> nums ={2,2,1,1,1,2,2};
    cout << v1.majorityElement(nums);
    return 0;
}