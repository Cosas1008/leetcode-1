class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows>=s.size() || numRows==1) return s;
        string ans(s.size(),0);
        int step=0, count = 0;
        bool plus = 1;
        for(int i=0; i<ans.size(); i++)
        {
            if(step==0 || step+1 ==numRows)
            {
                ans[i]= s[2*count*(numRows-1) + step];
                if(2*(count+1)*(numRows-1) + step >=ans.size())
                {
                    count = 0;
                    step++;
                }else count++;
            }else
            {
                if(plus)
                {
                    ans[i] = s[2*count*(numRows-1) + step];
                    if(2*(count+1)*(numRows-1) - step >=ans.size())
                    {
                        count = 0;
                        step++;
                    }else
                    {
                        plus = 0;
                        count++;
                    }
                }
                else
                {
                    ans[i] = s[2*count*(numRows-1) - step];
                    if(2*(count)*(numRows-1) + step >=ans.size())
                    {
                        count = 0;
                        step++;
                    }
                    plus=1;
                }
            }
        }
        return ans;
        
    }
};
