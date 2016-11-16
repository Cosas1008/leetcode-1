class Solution {
public:
    void connect(TreeLinkNode *root) {
        while(root != NULL){
            TreeLinkNode *temp = new TreeLinkNode(0);
            TreeLinkNode *currentNode = temp;
            while(root != NULL){
                if(root -> left != NULL){
                    currentNode -> next = root -> left;
                    currentNode = currentNode -> next;
                }
                if(root -> right != NULL){
                    currentNode -> next = root -> right;
                    currentNode = currentNode -> next;
                }
                root = root -> next;
            }
            root = temp -> next;
        }
    }
};
