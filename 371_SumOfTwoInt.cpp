class Solution {
public:
    int getSum(int a, int b) {
        int sum;
        while(b!=0)
        {
            sum=a^b;
            b=a&b;
            b<<=1;
            a=sum;
        }
        return sum;
    }
};
