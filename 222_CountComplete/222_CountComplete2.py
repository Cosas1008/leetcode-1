class Solution(object):
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
        num=(1<<depth-1) -1
        level=depth-2
        while level>-1:
            node=root.left
            for i in range(level): node=node.right
            if not node: root=root.left
            else: 
                num+=1<<level
                root=root.right
            level-=1
        if root:
            num+=1
        return num
