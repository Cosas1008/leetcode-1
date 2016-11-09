class Solution {
public:
    int myAtoi(string str) {
        int res = 0, i=0;
        bool sign = 0;
        while(str[i]==' ') i++;
        if(str[i]=='+' || str[i]=='-') sign = str[i++]=='-';
        while(i<str.size())
        {
            if(str[i]>'9' || str[i]<'0') break;
            if(res> INT_MAX/10 || (res==INT_MAX/10 and str[i]-'0'>7)) return sign? INT_MIN:INT_MAX;
            res *= 10;
            res +=str[i++]-'0';
        }
        return sign?-res:res;
    }
};
