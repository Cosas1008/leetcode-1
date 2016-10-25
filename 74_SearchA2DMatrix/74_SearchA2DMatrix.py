class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        lo=0
        hi=len(matrix)-1
        while lo<hi:
            mid=(lo+hi)/2
            if matrix[mid][0]==target:
                return True
            elif matrix[mid][0]>target:
                hi=mid
            else:
                lo=mid+1
        if matrix[lo][0]==target: return True
        if matrix[lo][0]>target:
            lo=lo-1
        list=matrix[lo]
        lo=0
        hi=len(list)-1
        while lo<hi:
            mid=(lo+hi)/2
            if list[mid]==target:
                return True
            elif list[mid]>target:
                hi=mid
            else:
                lo=mid+1
        if list[lo]==target: return True
        return False
