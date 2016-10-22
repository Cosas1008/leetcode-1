class Solution(object):
    def biSearch(self,l,x):
        hi=len(l)-1
        lo=0
        while lo<hi:
            mid=(lo+hi)/2
            if l[mid]==x:
                return l[mid]
            elif l[mid]>x:
                hi=mid
            else:
                lo=mid+1
        if l[lo]<x:
            return l[lo]+1
        return l[lo]
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if not s: return True
        if not t: return False
        i=0
        dict={}
        for i in range(len(t)):
            dict[t[i]]=dict.get(t[i],[])
            dict[t[i]].append(i)
        lowerBound=0
        for ss in s:
            if ss not in dict: return False
            else:
                ch=dict[ss]
                lowerBound=self.biSearch(ch,lowerBound)
                if lowerBound>ch[-1]:
                    return False
                lowerBound=lowerBound+1
        return True
