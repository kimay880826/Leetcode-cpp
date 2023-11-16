#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<string> fizzBuzz(int nums){
            vector<string> ans(nums);

            for(int i=0; i<nums; i++){
                if((i+1)%15 == 0)
                    ans[i] = "FizzBuzz";
                else if((i+1)%3 == 0)
                    ans[i] = "Fizz";
                else if((i+1)%5 == 0)
                    ans[i] = "Buzz";
                else
                    ans[i] = to_string(i+1);
            }
            return ans;
        }
};

int main(){
    Solution v1;
    int x = 15;
    vector<string> out = v1.fizzBuzz(x);
    for (int j = 0; j < out.size(); j++) {
        cout << out[j] << " ";
    }
    return 0;
}