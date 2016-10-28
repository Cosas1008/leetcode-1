class Solution():
    def binarySearch(self,lo,hi,t,A):
        while lo<=hi:
            mid=(lo+hi)/2
            if A[mid]==t:
                return mid
            elif A[mid]>t:
                hi=mid-1
            else:
                lo=mid+1
        return lo
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums: return 0
        tail=[nums[0]]
        for i in range(1,len(nums)):
            if nums[i]<tail[0]:
                tail[0]=nums[i]
            elif nums[i]>tail[-1]:
                tail.append(nums[i])
            else:
                tail[self.binarySearch(0,len(tail)-1,nums[i],tail)]=nums[i]
        return len(tail)
