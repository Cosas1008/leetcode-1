class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> leftMap;
        for(int i=0; i<nums.size();i++)
        {
            if(leftMap.find(nums[i])==leftMap.end()){
                leftMap[target-nums[i]]=i;
            }else
            {
                result.push_back(leftMap[nums[i]]);
                result.push_back(i);
            }
        }
        return result;
    }
};
