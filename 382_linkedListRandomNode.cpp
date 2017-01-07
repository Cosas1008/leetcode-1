/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* _head) {
        head = _head;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        ListNode *it = head;
        int r = it -> val;
        for(int i = 1; it->next; i++){
            it = it -> next;
            if(i==rand()%(i+1))
                r = it -> val;
        }
        return r;
    }
private:
    ListNode *head;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */
