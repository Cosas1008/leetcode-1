class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        for m in matrix:
            lo=0
            hi=len(m)-1
            while lo<=hi:
                mid=(lo+hi)/2
                if m[mid]==target:
                    return True
                elif m[mid]>target:
                    hi=mid-1
                else:
                    lo=mid+1
        return False
