class Solution
{
public:
    int lowerBound(vector<int> &nums, int x)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= x)
            {
                return i;
            }
        }
        return nums.size();
    }

    int rowWithMax1s(vector<vector<int>> &mat)
    {
        int cntm = -1;
        int idx = -1;

        for (int i = 0; i < mat.size(); i++)
        {
            int cnt = mat[0].size() - lowerBound(mat[i], 1);
            if (cnt > cntm)
            {
                cntm = cnt;
                idx = i;
            }
        }
        
        if (cntm == 0) {
            return -1;
        }
        
        return idx;
    }
};