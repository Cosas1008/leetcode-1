class Solution {
public:
    int maxArea(vector<int>& height) {
        int lo = 0, hi = height.size() - 1;
        int largest = 0;
        while(lo < hi){
            int volume = min(height[lo],height[hi])*(hi-lo);
            largest = max(largest, volume);
            if(height[lo] > height[hi]) hi--;
            else lo++;
        }
        return largest;
    }
};
