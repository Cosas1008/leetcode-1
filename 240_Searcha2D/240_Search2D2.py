class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        c=len(matrix[0])-1
        r=0
        while c>=0 and r<len(matrix):
            if matrix[r][c]>target:
                c-=1
            elif matrix[r][c]<target:
                r+=1
            else:
                return True
        return False
