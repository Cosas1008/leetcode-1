class Solution(object):
    def wiggleMaxLength(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums: return 0
        if len(nums)==1: return 1
        if len(nums)==2: return 2 if nums[0]!=nums[1] else 1
        ans=len(nums)
        prev=nums[0]
        up=-1
        for n in nums[1:]:
            if prev==n:
                ans-=1
            elif prev<n and up==1:
                ans-=1
            elif prev>n and up==0:
                ans-=1
            if prev<n:
                up=1
            elif prev>n:
                up=0
            prev=n
        return ans
