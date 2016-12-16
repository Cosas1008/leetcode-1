class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode * prev = head;
        ListNode * temp = head;
        head = head -> next;
        ListNode * cur = head;
        while( cur != NULL ){
            temp -> next = cur;
            ListNode * swap = cur -> next;
            cur -> next = prev;
            prev -> next = swap;
            temp = prev;
            if( swap == NULL) break;
            else{
              cur = swap -> next;
              prev = swap;
            } 
        }
        return head;
    }
};
