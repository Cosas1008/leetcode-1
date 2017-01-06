class Solution {
public:
    bool isAdditiveNumber(string num) {
        for(int i = 0; i<num.size()/2; i++){
            if(dfs(stoll(num.substr(0, i+1)), i+1, num))
                return true;
            if(num[0]=='0')
                return false;
        }
        return false;
    }
    bool dfs(long long int prev, int secondIndex, string num){
        bool res = false;
        for(int i = secondIndex; i < num.size(); i++){
            long long int next = stoll(num.substr(secondIndex, i-secondIndex+1));
            long long int tempSum;
            
            tempSum = prev + next;
            string tempSumStr = to_string(tempSum);
            if(tempSumStr.size()+i+1 <= num.size()){
                if(tempSumStr == num.substr(i+1, tempSumStr.size()))
                    if(i+tempSumStr.size()+1 == num.size())
                        return true;
                    else
                        res |= dfs(next, i+1, num);
            }
            else
                break;
            if(num[secondIndex] == '0')
                break;
        }
        return res;
    }
};
