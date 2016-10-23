class Solution(object):
    def heapify(self,i):
        l=i*2+1
        r=i*2+2
        small=i
        if l<len(self.h) and self.h[l][0]<self.h[small][0]: small=l
        if r<len(self.h) and self.h[r][0]<self.h[small][0]: small=r
        if i!=small:
            self.h[i],self.h[small]=self.h[small],self.h[i]
            self.heapify(small)
    def buildHeap(self):
        for i in range(len(self.h)/2-1,-1,-1):
            self.heapify(i)
    def insert(self,x):
        self.h.append(x)
        i=-1
        p=len(self.h)/2-1
        while p>=0 and self.h[p]>self.h[i]:
            self.h[p],self.h[i]=self.h[i],self.h[p]
            i=p
            p=(i-1)/2
    def pop(self):
        ans=self.h[0]
        self.h[0],self.h[-1]=self.h[-1],self.h[0]
        self.h=self.h[:-1]
        self.heapify(0)
        return ans
    def kthSmallest(self, matrix, k):
        """
        :type matrix: List[List[int]]
        :type k: int
        :rtype: int
        """
        self.h=[]
        for i in range(len(matrix)):
            self.insert((matrix[i][0],i,0))
        ans=0
        for l in range(k):
            ans,i,j=self.pop()
            if j+1<len(matrix[i]):
                self.insert((matrix[i][j+1],i,j+1))
        return ans
