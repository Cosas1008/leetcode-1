class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        depth = 2*n
        stack=[('(',1,0)]
        ans=[]
        word=["" for i in range(depth)]
        while stack:
            node,l,r = stack.pop()
            word[l+r-1]=node
            if l+r==depth:
                ans.append(''.join(word))
            if l<n:
                stack.append(('(',l+1,r))
            if l>r:
                stack.append((')',l,r+1))
        return ans
