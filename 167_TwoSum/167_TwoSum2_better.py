class Solution(object):
    def twoSum(self, nums, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        lo=0
        hi=len(nums)-1
        while lo<hi:
            s=nums[lo]+nums[hi]
            if s==target:
                return [lo+1,hi+1]
            elif s>target:
                hi-=1
            else:
                lo+=1
