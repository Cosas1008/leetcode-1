class Solution {
public:
    int depthSumInverse(vector<NestedInteger>& nestedList) {
        stack<ne> nested;
        vector<int> depthSum;
        for(auto it:nestedList){
            nested.push({it, 0});
            while(!nested.empty()){
                ne node = nested.top();
                nested.pop();
                if(node.first.isInteger()){
                    if(node.second >= depthSum.size())
                        depthSum.push_back(node.first.getInteger());
                    else
                        depthSum[node.second] += node.first.getInteger();
                }else{
                    if(node.second >= depthSum.size())
                        depthSum.push_back(0);
                    vector<NestedInteger> otherList = node.first.getList();
                    for(auto o: otherList){
                        nested.push({o, node.second + 1});
                    }
                }
            }
        }
        
        int res = 0;
        for(int i = 0; i<depthSum.size(); i++){
            res += depthSum[i]*(depthSum.size()-i);
        }
        
        return res;
    }
private:
    typedef pair<NestedInteger, int> ne;
};
