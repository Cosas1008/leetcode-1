import sys
class Solution(object):
    def minSubArrayLen(self, s, nums):
        """
        :type s: int
        :type nums: List[int]
        :rtype: int
        """
        i=0
        j=0
        sum=0
        minLen=sys.maxint
        while j<len(nums):
            if sum<s:
                sum+=nums[j]
                j+=1
            while sum>=s:
                minLen=min(minLen,j-i)
                sum-=nums[i]
                i+=1
        return 0 if minLen==sys.maxint else minLen
