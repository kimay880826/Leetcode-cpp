#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int buy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            else if(prices[i] - buy > max){
                max = prices[i] - buy;
            }
        }
        return max;
    }
};

int main(){
    Solution v1;
    vector<int> profit = {7,1,5,3,6,4};
    cout << v1.maxProfit(profit);
    return 0;
}