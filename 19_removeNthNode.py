class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        a=ListNode(0)
        if not head.next: return None
        nodei = head
        nodej = head
        i=0
        while i<n:
            nodej=nodej.next
            i+=1
        prev=None
        while nodej:
            prev=nodei
            nodei=nodei.next
            nodej=nodej.next
        if not prev: return head.next
        prev.next=nodei.next
        return head
