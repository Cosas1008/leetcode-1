class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *answer = new ListNode(0);
        ListNode *t = answer;
        int digit=0,ten=0;
        while(l1!=NULL || l2!=NULL)
        {
            digit=0;
            digit+=ten;
            if(l1)
            {
                digit+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                digit+=l2->val;
                l2=l2->next;
            }
            ten=digit/10;
            digit%=10;
            answer ->next = new ListNode(digit);
            answer = answer->next;
        }
        if(ten>=1)
        {
            answer ->next = new ListNode(1);
        }
        return t -> next;
    }
};
