#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.end()-k, nums.end());
        reverse(nums.begin(), nums.end());
        reverse(nums.begin()+k, nums.end());
        for(int i = 0; i < nums.size(); i++){
            cout << nums[i] << ' ';
        }
    }
};

int main(){
    Solution v1;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    v1.rotate(nums, k);
    return 0;
}