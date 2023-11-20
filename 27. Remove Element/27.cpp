#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            cout << *it << " ";
        }
        return nums.size();
    }
};

int main(){
    Solution v1;
    vector<int> nums={0,1,2,3,2,4,5};
    int val=2;
    v1.removeElement(nums, val);
    return 0;
}