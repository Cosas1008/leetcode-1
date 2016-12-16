class Solution {
public:
    int window = 0;
    int j = 0;
    void isPalindrome(int start, int end, string s)
    {
        while(start >= 0 && end < s.size() && s[start]==s[end]){
            start--;
            end++;
        }
        if(window < end - start - 1){
            j = start + 1;
            window = end - start - 1;
        }
    }
    string longestPalindrome(string s) {
        for(int i = 0; i < s.size(); i++){
            isPalindrome(i, i, s);
            isPalindrome(i, i+1, s);
        }
        return string(s,j,window);
    }
};
