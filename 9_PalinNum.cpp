class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0, y=x;
        while(y>0)
        {
            rev*=10;
            rev+=y%10;
            y/=10;
        }
        return rev==x;
    }
};
