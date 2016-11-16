class Solution {
public:
    int hIndex(vector<int>& c) {
        int i, n=c.size();
        int *b = new int [n+1]();
        for( i=0; i<n; i++)
            c[i] < n? b[c[i]]++ : b[n]++;
        int N_h = 0;
        for(i=n; i>=0; i--)
        {
            N_h += b[i];
            if(N_h >= i)
                return i;
        }
        return 0;
    }
};
