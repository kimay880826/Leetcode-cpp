#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(auto it = nums.begin(); it != nums.end(); it++){
            nums.erase(remove(it+1, nums.end(), *it), nums.end());
            k++;
            //cout << *it << " ";
        }
        return k;
    }
};

int main(){
    Solution v1;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << v1.removeDuplicates(nums) << endl;
    return 0;
}