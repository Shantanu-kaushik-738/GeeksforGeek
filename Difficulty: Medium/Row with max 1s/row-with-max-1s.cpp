class Solution {
public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        int row = -1;
        int j = n - 1;  

        for (int i = 0; i < m; i++) {
            while (j >= 0 && mat[i][j] == 1) {
                row = i;  
                j--;       
            }
        }
        return row;
    }
};