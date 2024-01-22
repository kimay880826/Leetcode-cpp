#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0, end=height.size()-1;
        int max=0;
        while(start < end){
            if(min(height[start],height[end])*(end-start) > max){
                max = min(height[start],height[end])*(end-start);
            }
            if(height[start] < height[end]){
                start++;
            }else if(height[start] > height[end]){
                end--;
            }else{
                end--;
            }
        }
        return max;
    }
};

int main(){
    vector<int> height ={1,8,6,2,5,4,8,3,7};
    Solution v1;
    cout << v1.maxArea(height) << endl;
    return 0;
}