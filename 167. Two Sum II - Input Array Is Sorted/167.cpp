#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> two;
        int x=0, y=numbers.size()-1;
        while(numbers[x]+numbers[y] != target){
            if(numbers[x]+numbers[y] > target){
                y--;
            }else if(numbers[x]+numbers[y] < target){
                x++;
            }
        }
        two.push_back(x+1);
        two.push_back(y+1);
        return two;
    }
};

int main(){
    Solution v1;
    int target = -2;
    vector<int> numbers = {-1,-1};
    for(auto &v : v1.twoSum(numbers, target)){
        cout << v << " ";
    }
    return 0;
}