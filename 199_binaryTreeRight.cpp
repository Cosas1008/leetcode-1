ass Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        stack<pair<TreeNode*,int>> dfs;
        dfs.push({root,0});
        while(!dfs.empty()){
            auto element = dfs.top();
            dfs.pop();
            TreeNode * node = element.first;
            int depth = element.second;
            if(depth >= res.size())
                res.push_back(node -> val);
            if(node -> left)
                dfs.push({node->left, depth+1});
            if(node -> right)
                dfs.push({node->right, depth+1});
        }
        return res;
    }
};
