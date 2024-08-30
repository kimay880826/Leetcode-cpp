#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row, column;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0 
                        && find(row.begin(), row.end(), i) == row.end()){
                    row.push_back(i);
                }
                if(matrix[i][j]==0 
                        && find(column.begin(), column.end(), j) == column.end()){
                    column.push_back(j);
                }
            }
        }
        for(int i=0; i<row.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                matrix[row[i]][j]=0;
            }
        }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<column.size(); j++){
                matrix[i][column[j]]=0;
            }
        }
    }
};

int main(){
    Solution v1;
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    v1.setZeroes(matrix);
    for(int x=0; x<matrix.size(); x++){
        for(int y=0; y<matrix.size(); y++){
            cout << matrix[x][y] << " ";
        }
    }
    return 0;
}