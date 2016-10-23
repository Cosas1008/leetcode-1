class Solution(object):
    def nthSuperUglyNumber(self, n, primes):
        """
        :type n: int
        :type primes: List[int]
        :rtype: int
        """
        k=[1]
        idx=[0 for i in range(len(primes))]
        ugly=1
        for nn in range(1,n):
            ugly=min([k[idx[i]]*primes[i] for i in range(len(primes))])
            for i in range(len(primes)):
                if k[idx[i]]*primes[i]==ugly:
                    idx[i]+=1
            k.append(ugly)
        return ugly
