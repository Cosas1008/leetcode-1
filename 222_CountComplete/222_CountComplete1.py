class Solution(object):
    def search(self,root,mid,depth):
        node=root
        LR=''
        for i in range(depth):
            if mid&1: LR='R'+LR
            else: LR='L'+LR
            mid>>=1
        for i in range(depth):
            if LR[i]=='L': node=node.left
            elif LR[i]=='R': node=node.right
        return node
    def countNodes(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root: return 0
        node=root
        depth=0
        while node:
            node=node.left
            depth+=1
        num=2**(depth-1)-1
        lo=0
        hi=num
        while lo<=hi:
            mid=(lo+hi)/2
            if self.search(root,mid,depth-1):
                lo=mid+1
            else:
                hi=mid-1
        return num+lo
