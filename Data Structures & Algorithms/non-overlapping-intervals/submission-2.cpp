class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans=0;
       sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
            return a[1] < b[1];
        });
        vector<int>arr(2);
        arr[0]=intervals[0][0];
         arr[1]=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(arr[1]>intervals[i][0]){
                ans++;
                
            }
            else{
                arr[0]=intervals[i][0];
                 arr[1]=intervals[i][1];
            }
        }
        return ans;

    }
};
