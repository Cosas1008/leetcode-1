class Solution {
public:
    int depthSum(vector<NestedInteger>& nestedList) {
        stack<ne> nested;
        int res = 0;
        for(auto it:nestedList){
            nested.push({it, 1});
            while(!nested.empty()){
                ne node = nested.top();
                nested.pop();
                if(node.first.isInteger()){
                    res += node.first.getInteger()*node.second;
                }else{
                    vector<NestedInteger> otherList = node.first.getList();
                    for(auto o: otherList){
                        nested.push({o, node.second + 1});
                    }
                }
            }
        }
        return res;
    }
private:
    typedef pair<NestedInteger, int> ne;
};
