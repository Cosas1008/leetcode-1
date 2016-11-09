class Solution {
public:
    int reverse(int x) {
        int ans = 0, temp = 0;
        bool sign=false;
        while(x)
        {
            temp *=10;
            temp += x%10;
            if(temp/10!=ans) return 0;
            ans = temp;
            x/=10;
        }
        return ans;
    }
};
