class Solution {
  public:
    long subarrayXor(vector<int> &nums, int k) {
        int cnt=0;
        int xr=0;
        map<int,int>mp;
        mp[xr]++;
        
        for(int i=0;i<nums.size();i++){
            xr^=nums[i];
            int x=xr^k;
            cnt+=mp[x];
            mp[xr]++;
        }
        return cnt;
    }
};