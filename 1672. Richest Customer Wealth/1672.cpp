#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int runningSum(vector<vector<int>> &nums){
            int customer=nums.size(), bank=nums[0].size(), maxw=0;
            for(int i=0; i<customer; i++){
                int sum=0;
                for(int j=0; j<bank; j++){
                    sum += nums[i][j];
                }
                maxw=max(maxw, sum);
            }
            return maxw;
        }
};

int main(){
    Solution v1;
    vector<vector<int>> x = {{7,1,3},{2,8,7},{1,9,5}};
    cout << v1.runningSum(x);
    return 0;
}