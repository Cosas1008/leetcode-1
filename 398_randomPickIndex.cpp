class Solution {
public:
    Solution(vector<int> _nums) {
        nums = _nums;
    }
    
    int pick(int target) {
        int index, length=0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==target){
                length++;
                if(rand()%length == length-1)
                    index = i;
            }
        }
        return index;
    }
private:
    vector<int> nums;
};
