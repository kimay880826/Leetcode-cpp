#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> hash;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(find(hash.begin(), hash.end(), board[i][j]) != hash.end()
                                                            && board[i][j] != '.'){
                    return false;
                }else if(board[i][j] != '.'){
                    hash.push_back(board[i][j]);
                }
            }
            hash.clear();
        }
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(find(hash.begin(), hash.end(), board[j][i]) != hash.end()
                                                            && board[j][i] != '.'){
                    return false;
                }else if(board[j][i] != '.'){
                    hash.push_back(board[j][i]);
                }
            }
            hash.clear();
        }
        int m, n, i=0, j=0;
        for(i=0; i<9; i=i+3){
            for(j=0; j<9; j=j+3){
                for(m=i; m<i+3; m++){
                    for(n=j; n<j+3; n++){
                        if(find(hash.begin(), hash.end(), board[m][n]) != hash.end()
                                                            && board[m][n] != '.'){
                            return false;
                        }else if(board[m][n] != '.'){
                            hash.push_back(board[m][n]);
                        }
                    }
                }
                hash.clear();
            }
        }
        return true;
    }
};

int main(){
    Solution v1;
    vector<vector<char>> matrix = {{'5','3','.','.','7','.','.','.','.'}
                                    ,{'6','.','.','1','9','5','.','.','.'}
                                    ,{'.','9','8','.','.','.','.','6','.'}
                                    ,{'8','.','.','.','6','.','.','.','3'}
                                    ,{'4','.','.','8','.','3','.','.','1'}
                                    ,{'7','.','.','.','2','.','.','.','6'}
                                    ,{'.','6','.','.','.','.','2','8','.'}
                                    ,{'.','.','.','4','1','9','.','.','5'}
                                    ,{'.','.','.','.','8','.','.','7','9'}};
    cout << v1.isValidSudoku(matrix) <<endl;
    
    return 0;
}