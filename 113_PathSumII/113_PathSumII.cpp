class Solution {
public:
    // iterative solution, post-order travel
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        stack<TreeNode*> dfs;
        TreeNode *pre = NULL, *cur = root, *top = NULL;
        vector<int> v;
        vector<vector<int>> res;
        int val = 0;
        while( cur || !dfs.empty() ){
            if(cur){
                dfs.push(cur);
                v.push_back(cur -> val);
                val += cur -> val;
                if( !cur -> left && !cur -> right && val == sum)
                    res.push_back(v);
                cur = cur -> left;
            }else{
                TreeNode *top = dfs.top();
                if( top -> right == pre || !top -> right ){
                    dfs.pop();
                    v.pop_back();
                    val -= top -> val;
                    pre = top;
                }else{
                    cur = top -> right;
                }
            }
        }
        return res;
        
    }
};
