#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int x;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(j>i){
                    x=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=x;
                }
            }
        }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size()/2; j++){
                x=matrix[i][j];
                matrix[i][j]=matrix[i][matrix.size()-j-1];
                matrix[i][matrix.size()-j-1]=x;
            }
        }
    }
};

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    Solution v1;
    v1.rotate(matrix);
    for(int x=0; x<matrix.size(); x++){
        for(int y=0; y<matrix[0].size(); y++){
            cout << matrix[x][y] << " ";
        }
    }
    return 0;
}