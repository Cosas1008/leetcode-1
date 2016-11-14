class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        	int windowSize = p.size();
	        int hashTableP[26] = {0};
	        vector<int> res;
	        for( int i = 0; i < p.size(); i++)
		        hashTableP[ p[i] - 'a']++;
	        for( int i = 0; i + windowSize <= s.size(); i++)
	        {
		        int hashTable[26] = {0};
                for(int j=i; j < i + windowSize; j++)
                {
    	        hashTable[s[j]-'a'] ++;
                }
                bool notSame = false;
                for(int j=0; j < 26; j++)
                if(hashTable[j] != hashTableP[j]) notSame = true;
                if(!notSame) res.push_back(i);
            }
            return res;

    }
};
