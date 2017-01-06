class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        unordered_map<char, int> oper = {{'*',-1},{'+',-2},{'-',-3}};
        vector<int> nums;
        int element=0;
        for(auto w:input){
            if(isdigit(w)){
                element *= 10;
                element += w-'0';
            }else{
                nums.push_back(element);
                element = 0;
                nums.push_back(oper[w]);
            }
        }
        nums.push_back(element);
        int elementCount = (nums.size()+1)/2;
        return compute(0, elementCount, nums);
    }
    
    vector<int> compute(int start, int elementCount, vector<int>& nums){
        vector<int> res;
        if(elementCount==1){
            return {nums[start]};
        }
        else{
            for(int i = 0; i < elementCount-1; i++){
                vector<int> A = compute(start, i+1, nums);
                vector<int> B = compute(i*2+start+2, elementCount-i-1, nums);
                vector<int> resAB = vectorOper(A, B, nums[i*2+start+1]);
                res.insert(res.end(), resAB.begin(), resAB.end());
            }
        }
        return res;
    }
    
    vector<int> vectorOper(vector<int> A, vector<int> B, int op){
        vector<int> res;
        for(auto a: A)
            for(auto b: B)
                res.push_back(basicOper(a, b, op));
        return res;
    }
    
    int basicOper(int a, int b, int op){
        int res = 0;
        switch(op){
            case -1:
                res = a*b;
                break;
            case -2:
                res = a+b;
                break;
            case -3:
                res = a-b;
                break;
        }
        return res;
    }
};
