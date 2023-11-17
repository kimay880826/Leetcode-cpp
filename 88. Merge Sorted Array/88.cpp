#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
            int cur1=0, cur2=0;
            nums1.resize(m);
            nums2.resize(n);
            while(cur2 < n){
                if(m == 0 || nums1.back() <= nums2[cur2]){
                    //nums1 has been fully processed
                    nums1.push_back(nums2[cur2]);
                    //have processed a node in nums2
                    cur2++;
                }
                else if(nums2[cur2] <= nums1[cur1]){
                    nums1.insert(nums1.begin()+cur1, nums2[cur2]);
                    //have processed a node in nums2
                    cur2++;
                }
                cur1++;
            }
            nums1.resize(m+n);
            return nums1;
        }
};

int main(){
    Solution v1;
    vector<int> nums1={1,2,3,0,0,0}, nums2={2,5,6}, out;
    int m=3, n=3;
    out = v1.merge(nums1, m, nums2, n);
    for(int i=0; i<out.size(); i++){
        cout << out[i] <<' ';
    }
    return 0;
}