// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        
    long long  n = mat.size();
    int  m = mat[0].size();
    int ans = -1;
    int mcnt = 0;

    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<m;j++){
            if(mat[i][j]==1){
                cnt++;
            }
            if (mcnt < cnt){
                mcnt = cnt;
                ans = i;
            }
        }
    }
    return ans;
  }
};