class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> k(n,vector(n,0));
        
        //first we take transpose of the matrix
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                // swap(matrix[i][j], matrix[j][i]);
                k[i][j]=matrix[j][i];
            }
        }
        
        //then we take mirror image about the middle vertical line
        for(int i = 0; i < n; ++i){
            reverse(k[i].begin(), k[i].end());
        }
        for(int i = 0  ; i<n;i++){
            for(int j = 0; j < n; j++){
                matrix[i][j]=k[i][j];
            }
        }
    }
};
