class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int lo=0;
        int hi=n-1;
        int ans=0;
        while(hi>lo){
            ans=max(ans,((hi-lo)*min(heights[lo],heights[hi])));
            if(heights[lo]<heights[hi])lo++;
            else hi--;
        }
        return ans;
    }
};
