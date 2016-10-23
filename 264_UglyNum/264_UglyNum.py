class Solution(object):
    def nthUglyNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        k=[1]
        p=[2,3,5]
        idx=[0,0,0]
        ugly=1
        for i in range(1,n):
            ugly=min(k[idx[0]]*2,k[idx[1]]*3,k[idx[2]]*5)
            if ugly==k[idx[0]]*2: idx[0]+=1
            if ugly==k[idx[1]]*3: idx[1]+=1
            if ugly==k[idx[2]]*5: idx[2]+=1
            k.append(ugly)
        return ugly
