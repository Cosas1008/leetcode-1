class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        # we have to find the tops and the bottoms of the array
        if not prices or len(prices)==1: return 0
        bot=0
        if prices[0]<=prices[1]: bot=prices[0]
        prev=prices[0]
        ans=0
        for i in range(1,len(prices)-1):
            if prices[i]==prices[i+1]:
                continue
            if prev<prices[i] and prices[i]>prices[i+1]:
                ans+=prices[i]-bot
            if prices[i]<prev and prices[i]<prices[i+1]:
                bot=prices[i]
            prev=prices[i]
        if prices[-1]>=prev: ans+=prices[-1]-bot
        return ans
