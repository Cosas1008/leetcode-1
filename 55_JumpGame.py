class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if not nums: return True
        m=nums[0]
        i=1
        while i<=m and m<len(nums)-1:
            m=max(m,i+nums[i])
            i+=1
        return m>=len(nums)-1
