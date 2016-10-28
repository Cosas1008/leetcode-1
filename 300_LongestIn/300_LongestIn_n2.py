class Solution(object):
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums: return 0
        tail=[0]*len(nums)
        tail[0]=1
        m=1
        for i in range(1,len(nums)):
            for j in range(i):
                if nums[j]<nums[i]:
                    tail[i]=max(tail[i],tail[j])
            tail[i]+=1
            m=max(m,tail[i])
        return m
