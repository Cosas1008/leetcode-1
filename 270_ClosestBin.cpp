#include <limits>
class Solution {
public:
    int closestValue(TreeNode* root, double target) {
        int res = root -> val;
        while( root != NULL)
        {
            if(abs( res - target) > abs(root -> val - target)) res = root -> val;
            root = root -> val > target? root -> left : root -> right;
        }
        return res;
    }
};
