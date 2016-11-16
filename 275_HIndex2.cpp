class Solution {
public:
    int hIndex(vector<int>& citations) {
        int lo = 0, hi = citations.size() - 1;
        int n = citations.size()-1;
        while(lo <= hi){
            int mid =(lo + hi) / 2;
            if( citations[n - mid] <= mid) hi = mid - 1;
            else lo = mid + 1;
        }
        return lo;
    }
};
