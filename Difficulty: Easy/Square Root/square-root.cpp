class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int st = 1;
    int end = n/2;
    
    if(n<2){
        return 1;
    }

        while(st<=end){
            int mid = st+(end-st)/2;

            if(mid*mid<=n){
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
    return end;
    }
};