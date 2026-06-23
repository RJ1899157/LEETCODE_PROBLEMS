class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int tag;
        if (target<matrix[0][0]){
            return false;
        }
        for (int i=0; i<matrix.size()-1;i++){
            if (target>=matrix[i][0]){
                if (target<matrix[i+1][0]){
                    tag=i;
                }
                else{
                    tag=i+1;
                }
            }
        }
        for (int j=0;j<matrix[tag].size();j++){
            if (target==matrix[tag][j]){
                return true;
            }
        }
        return false;
    }
};