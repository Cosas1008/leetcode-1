class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num==1: return True
        s=num/2
        while s*s>num:
            s>>=1
        lo=s
        hi=s<<1
        while lo<=hi:
            mid=(hi+lo)/2
            if mid*mid==num:
                return True
            elif mid*mid>num:
                hi=mid-1
            else:
                lo=mid+1
        return False
