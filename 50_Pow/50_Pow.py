class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        if n==0: return 1
        list=[]
        y=2
        if n<0: 
            x=1/x
            n=-n
        ans=x
        while n/y>0:
            list.append([ans,y>>1])
            ans*=ans
            y<<=1
        res=n%(y>>1)
        for i in range(len(list)-1,-1,-1):
            if list[i][1]<=res:
                ans*=list[i][0]
                res-=list[i][1]
            if res==0:
                break
        return ans
