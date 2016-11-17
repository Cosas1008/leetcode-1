class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if( nums.size() < 3 ) return res;
        sort( nums.begin(), nums.end() );
        for(int i = 0; i < nums.size() - 2;){
            int lo = i + 1, hi = nums.size() - 1;
            while( lo < hi ){
                int sum = nums[lo] + nums[hi] + nums[i];
                if(sum == 0) 
                    res.push_back(vector<int> {nums[lo],nums[hi],nums[i]} );
                if( sum <= 0) while(nums[lo] == nums[++lo] && lo < hi);
                if( sum >= 0) while(nums[hi] == nums[--hi] && lo < hi);
            }
            while(nums[i]==nums[++i] && i < nums.size() - 2);
        }
        return res;
        
    }
};
