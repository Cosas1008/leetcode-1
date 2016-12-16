class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int _k=k;
        ListNode *list=head,*prevList,*tempHead=head,*prevHead=NULL,*bigHead=head;
        //k==1? list only 1?
        if(head==NULL||head->next==NULL||k==1) return head;
        while(list!=NULL)
        {
            k--;
            if(k==0)
            {
                
                list=tempHead->next;
                                    
                prevList = tempHead;
                for(k=_k-1;k>0;k--)
                {
                    prevList->next=list->next;
                    list->next=tempHead;
                    if(prevHead!=NULL)
                        prevHead->next=list;
                    tempHead = list;
                    if(k==1 && prevHead==NULL) bigHead=list;
                    list = prevList->next;
                } 
                
                if(list!=NULL)
                {
                    tempHead = list;
                    prevHead = prevList;
                }else break;
                k=_k-1;
            }
            list=list->next;
        }
        
        return bigHead;
    }
};
