class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map< int, int > map;
        for( int a : A)
            for( int b : B)
                map[ a + b ]++;
                /*
                if( map.find( a + b) == map.end() )
                    map[ a + b ] = 1;
                else
                    map[ a + b ] ++;
                */
        int res = 0;
        for( int c : C)
            for( int d : D)
                res += map[ -( c + d ) ];
        return res ;
    }
};
