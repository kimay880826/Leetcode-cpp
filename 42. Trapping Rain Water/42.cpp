#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    //total water is trapped into the bars
    int trap(vector<int>& h) {
        int l=0, r=h.size()-1, lmax=0, rmax=0, ans=0;
        while(l<r){
            lmax = max(lmax, h[l]);
            rmax = max(rmax, h[r]);
            ans += (lmax < rmax) ? lmax-h[l++] : rmax-h[r--];
        }
        return ans;
    }
};

int main(){
    Solution v1;
    vector<int> height = {4,2,0,3,2,5};
    cout << v1.trap(height) << endl;
} 