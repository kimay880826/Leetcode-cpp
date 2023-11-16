#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        int Reduce(int num){
            int x=num, count=0;
            while(x > 0){
                if(x%2 == 0){
                    x = x/2;
                }
                else if(x%2 !=0){
                    x = x-1;
                }
                count++;
            }
            return count;
        }
};

int main(){
    Solution v1;
    int num=8;
    cout << v1.Reduce(num);
    return 0;
}