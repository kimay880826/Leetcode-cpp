#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> runningSum(vector<int> &nums){
            for(int i = 1; i < nums.size(); i++){
                nums[i] += nums[i - 1];
                //cout << nums[i] << " ";
            }
            return nums;
        }
};

int main(){
    Solution v1;
    vector<int> x = {1,2,3,4,5};
    vector<int> out = v1.runningSum(x);
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << " ";
    }
    return 0;
}