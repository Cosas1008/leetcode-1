class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        dict={}
        ans=0
        for ss in s:
            dict[ss]=dict.get(ss,0)+1
        flag=False
        for x in dict.values():
            ans+=2*(x/2)
            if x%2==1:
                flag=True
        if flag:
            ans+=1
        return ans
