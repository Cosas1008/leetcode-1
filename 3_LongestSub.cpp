class Solution {      
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        string word="";
        bool isLong=0;
        for(string::iterator it=s.begin();it!=s.end();++it)
        {
            int pos = word.find(*it);
                if(pos < word.size())
                {
                    word=word.substr(pos+1)+*it;     
                    isLong = 1;
                }else word+=*it;
            len = len > word.size() ? len : word.size();
        }
        return len;
    }
};
