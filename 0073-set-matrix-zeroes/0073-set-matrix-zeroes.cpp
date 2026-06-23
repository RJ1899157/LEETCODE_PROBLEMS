void markrow(vector<vector<int>>& matrix,int i){
    for (int j=0;j < matrix[0].size();j++){
        matrix[i][j]=0;
    }
}
void markcol(vector<vector<int>>& matrix,int j){
    for (int i=0;i < matrix.size();i++){
        matrix[i][j]=0;
    }
}

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> mark;

        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (matrix[i][j]==0){
                    mark.push_back({i,j});
                }
            }
        }

        for (int i=0;i<mark.size();i++){

            markrow(matrix,mark[i][0]);
            markcol(matrix,mark[i][1]);
        }
    }
};