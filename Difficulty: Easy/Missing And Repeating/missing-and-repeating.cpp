class Solution {
  public:
    vector<int> findTwoElement(vector<int>& nums) {
        
        int rn=-1;
        int mn=-1;
        int n = nums.size();
        int temp[n+1] = {0};
        
        for(int i = 0; i < n; i++) {
            temp[nums[i]]++;    
        }
        
        for(int i = 1; i <= n; i++){
            if(temp[i]==2){
                rn = i;
            }
            if(temp[i]==0){
                mn = i;
            }
        }
        
        return {rn,mn};
    }
};