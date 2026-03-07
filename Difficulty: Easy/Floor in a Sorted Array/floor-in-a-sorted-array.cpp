class Solution {
  public:
    int findFloor(vector<int>& nums, int x) {
        
   int n=nums.size();
   int flr=-1;
   int st = 0, end = n-1;

        while(st<=end){
            int mid = st + (end-st)/2;
        
            if(nums[mid]<=x){
                flr = mid;
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
    return flr;
    }
};
