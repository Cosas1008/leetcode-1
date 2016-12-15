class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        bool *dp = new bool[s.size()+1]();
        dp[0] = 1;
        for(int i = 1; i<=s.size(); i++)
            for(int j=0 ; j < i; j++)
                if(dp[j] && wordDict.find(s.substr(j, i-j)) != wordDict.end())
                    dp[i] = 1;
        return dp[s.size()];
    }
};
