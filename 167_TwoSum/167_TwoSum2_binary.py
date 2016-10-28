class Solution(object):
    def twoSum(self, nums, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        i=len(nums)-1
        while i>=0:
            a1=nums[i]
            a2=target-nums[i]
            lo=0
            hi=i-1
            while lo<=hi:
                mid=(lo+hi)/2
                if nums[mid]==a2:
                    return [mid+1,i+1]
                elif nums[mid]>a2:
                    hi=mid-1
                else:
                    lo=mid+1
            i-=1
