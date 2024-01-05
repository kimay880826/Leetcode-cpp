#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string out;
        while(num / 1000 != 0){
            out.append("M");
            num -= 1000;
        }
        while(num - 900 >= 0){
            out.append("CM");
            num -= 900;
        }
        while(num - 500 >= 0){
            out.append("D");
            num -= 500;
        }
        while(num - 400 >= 0){
            out.append("CD");
            num -= 400;
        }
        while(num / 100 != 0){
            out.append("C");
            num -= 100;
        }
        while(num - 90 >= 0){
            out.append("XC");
            num -= 90;
        }
        while(num - 50 >= 0){
            out.append("L");
            num -= 50;
        }
        while(num - 40 >= 0){
            out.append("XL");
            num -= 40;
        }
        while(num / 10 != 0){
            out.append("X");
            num -= 10;
        }
        while(num - 9 >= 0){
            out.append("IX");
            num -= 9;
        }
        while(num - 5 >= 0){
            out.append("V");
            num -= 5;
        }
        while(num - 4 >= 0){
            out.append("IV");
            num -= 4;
        }
        while(num - 1 >= 0){
            out.append("I");
            num -= 1;
        }
        return out;
    }
};

int main(){
    Solution v1;
    int num = 40;
    cout << v1.intToRoman(num) << endl;
    return 0;
}