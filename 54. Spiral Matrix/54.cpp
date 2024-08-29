#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i=0, j=-1;
        vector<int> out;
        int length=matrix.size(), width=matrix[0].size();
        while(1){
            for(j=j+1; j<width; j++){
                out.push_back(matrix[i][j]);
            }
            if(out.size() == matrix.size()*matrix[0].size()) break;
            j--;

            for(i=i+1; i<length; i++){
                out.push_back(matrix[i][j]);
            }
            if(out.size() == matrix.size()*matrix[0].size()) break;
            i--;
            cout << "i=" << i << endl;

            for(j=j-1; j>=(int)(matrix[0].size()-width); j--){
                out.push_back(matrix[i][j]);
            }
            if(out.size() == matrix.size()*matrix[0].size()) break;
            j++;
            length--;

            for(i=i-1; i>=(int)(matrix.size()-length); i--){
                out.push_back(matrix[i][j]);
            }
            if(out.size() == matrix.size()*matrix[0].size()) break;
            i++;
            width--;

        }
        return out;
    }
};

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    Solution v1;
    vector<int> ans=v1.spiralOrder(matrix);
    for(int x=0; x<ans.size(); x++){
        cout << ans[x] << " ";
    }
    return 0;
}