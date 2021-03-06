class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int sum = 0;
        
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                if(i-1>=0 && j-1>=0 && matrix[i][j]){
                    matrix[i][j] += min(matrix[i-1][j-1],min(matrix[i-1][j],matrix[i][j-1]));
                }
                sum+= matrix[i][j];
            }
        }
        return sum;
    }
};
