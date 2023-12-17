#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        vector<int> prefix;
        for(int i=0; i<n; i++){
            prefix.push_back(gas[i]-cost[i]); 
        }
        int index = 0;
        int sum = 0;
        int mid = 0;
        for(int i=0 ; i<n ; i++){
            sum+=prefix[i];
            mid+=prefix[i];
            if(mid<0){
                mid = 0;
                index = i+1;
            }  
        }
        return sum<0?-1:index;
    }
};

int main(){
    Solution v1;
    vector<int> gas = {1,2,3,4,5}, cost = {3,4,5,1,2};
    v1.canCompleteCircuit(gas, cost);
    return 0;
}