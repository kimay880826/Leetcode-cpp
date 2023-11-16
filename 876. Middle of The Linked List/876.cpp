#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> middle(vector<int> &nums){
            vector<int> x;
            for(int i=nums.size()/2; i<nums.size(); i++){
                x.push_back(nums[i]);
            }
            return x;
        }
};

int main(){
    Solution v1;
    vector<int> nums={1,2,3,4,5,6};
    vector<int> x=v1.middle(nums);
    for(int i=0; i<x.size(); i++){
        cout << x[i] << " ";
    }
    return 0;
}