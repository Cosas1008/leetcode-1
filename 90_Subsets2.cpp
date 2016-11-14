class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort( nums.begin(), nums.end() );
        vector<vector<int>> res;
        vector<int> subset;
        res.push_back(subset);
        subset.push_back(nums[0]);
        int prevn = res.size();
        res.push_back(subset);
        int prev = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            int n = res.size(), j;
            if(prev == nums[i]) j = prevn;
            else j = 0;
            prevn = res.size();
            for(; j < n; j++)
            {
                subset = res[j];
                subset.push_back( nums[i] );
                res.push_back( subset );
            }
            prev = nums[i];
            
        }
        return res;
    }
};
