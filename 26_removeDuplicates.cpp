class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(!j || nums[i] > nums[j-1]){
                nums[j++] = nums[i];
            }
        }
        return j;
        
    }
};
