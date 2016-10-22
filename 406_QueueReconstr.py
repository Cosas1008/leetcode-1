class Solution(object):
    def reconstructQueue(self, people):
        """
        :type people: List[List[int]]
        :rtype: List[List[int]]
        """
        people.sort(key= lambda x:x[1])
        people.sort(key= lambda x:x[0],reverse=True)
        ans=[]
        for p in people:
            ans=ans[:p[1]]+[p]+ans[p[1]:]
        return ans
