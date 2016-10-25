class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
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
        start=lo
        lo=0
        hi=len(nums)-1
        while lo<=hi:
            mid=(lo+hi)/2
            shipMid=(mid+start)%len(nums)
            if nums[shipMid]==target:
                return shipMid
            elif nums[shipMid]>target:
                hi=mid-1
            else:
                lo=mid+1
        return -1
