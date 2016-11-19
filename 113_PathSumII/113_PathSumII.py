class Solution(object):
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: List[List[int]]
        """
        if not root: return []
        DFS = [(root, 0, root.val)]
        l=[]
        res=[]
        while DFS:
            node, depth, s = DFS.pop()
            if(depth+1 > len(l)): l.append(node.val)
            else: l[depth] = node.val
            if(not node.left and not node.right and s==sum):
                res.append(l[:depth+1])
            if(node.right):
                DFS.append((node.right, depth+1, s+node.right.val))
            if(node.left):
                DFS.append((node.left, depth+1, s+node.left.val))
        return res
