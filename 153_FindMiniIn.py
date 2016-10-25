class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        lo=0
        hi=len(nums)-1
        pi=nums[-1]
        while lo<=hi:
            mid=(lo+hi)/2
            if nums[mid]>pi:
                lo=mid+1
            elif nums[mid]<=pi:
                hi=mid-1
        return nums[lo]
