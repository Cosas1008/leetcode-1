class Solution():
    def heapify(self,i):
        l=(i<<1)+1
        r=(i<<1)+2
        lar=i
        if l<len(self.h) and self.h[l]>self.h[lar]: lar=l
        if r<len(self.h) and self.h[r]>self.h[lar]: lar=r
        if lar!=i:
            self.h[lar],self.h[i]=self.h[i],self.h[lar]
            self.heapify(lar)
    def buildHeap(self):
        for i in range((len(self.h)>>1)-1,-1,-1):
            self.heapify(i)
            
    def pop(self):
        ans=self.h[0]
        self.h[0],self.h[-1]=self.h[-1],self.h[0]
        self.h=self.h[:-1]
        self.heapify(0)
        return ans
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        self.h=nums
        self.buildHeap()
        ans=0
        for i in range(k):
            ans=self.pop()
        return ans
