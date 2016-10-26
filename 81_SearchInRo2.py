class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: bool
        """
        lo=0
        hi=len(nums)-1
        while lo<=hi:
            mid=(lo+hi)/2
            if nums[mid]==target:
                return True
            if nums[mid]>nums[hi]:
                if target<nums[mid] and target>=nums[lo]:
                    hi=mid-1
                else:
                    lo=mid+1
            if nums[mid]<nums[hi]:
                if target>nums[mid] and target<=nums[hi]:
                    lo=mid+1
                else:
                    hi=mid-1
            if nums[mid]==nums[hi]:
                hi-=1
        return False
