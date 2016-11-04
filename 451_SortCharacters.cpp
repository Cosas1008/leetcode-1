class Solution {
public:
    string frequencySort(string s) {
        int freq[256];
        for(int i=0; i<256;i++) freq[i]=0;
        int K=0,charCount=0;
        for(string::iterator it = s.begin(); it!=s.end(); it++)
        {
            if(freq[*it]==0) charCount++;
            freq[*it]++;
            if(freq[*it]>K) K=freq[*it];
        }
        int *B = new int[charCount];
        int *C = new int[K+1];
        for(int i=0; i<=K; i++) C[i]=0;
        for(int i=0; i<256; i++) C[freq[i]]++;
        for(int i=2; i<=K; i++) C[i]=C[i]+C[i-1];
        for(int i=255; i>=0; i--)
        {
            if(freq[i]>0)
            {
                B[C[freq[i]]-1] = i;
                C[freq[i]]--;
            }
        }
        string freqS;
        for(int i=charCount-1; i>=0; i--)
            for(int j=0; j<freq[B[i]];j++)
                freqS.push_back(B[i]);
        return freqS;
    }
};
