#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        //cout << *nums.begin() << " ";
        for(auto it = nums.begin()+1; it != nums.end(); it++){
            if(*it == *(it-1)){
                nums.erase(remove(it+1, nums.end(), *it), nums.end());
                k++;
                //cout << *it << " ";
            }
            else{
                k++;
                //cout << *it << " ";
            }
        }
        return k;
    }
};

int main(){
    Solution v1;
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    cout << v1.removeDuplicates(nums) << endl;
    return 0;
}