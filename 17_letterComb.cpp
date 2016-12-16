class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> digitMap = 
        {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},
         {'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        vector<string> res;
        for(auto w: digits){
            if(digitMap.find(w) == digitMap.end())
                continue;
            if(res.empty()){
                string words = digitMap[w];
                for(auto word: words)
                    res.push_back({word});
            }else{
                string words = digitMap[w];
                vector<string> newRes;
                for(auto word: words)
                    for(auto r:res)
                        newRes.push_back(r+word);
                res = newRes;
            }
        }
        return res;
    }
};
