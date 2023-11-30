#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0], max=0, out=0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < prices[i-1]){
                out += max;
                max = 0;
                buy = prices[i];
            }
            else if(prices[i]-buy > max){
                max = prices[i]-buy;
            }
        }
        out += max;
        return out;
    }
};

int main(){
    Solution v1;
    vector<int> prices = {7,6,4,3,1};
    cout << v1.maxProfit(prices);
    return 0;
}