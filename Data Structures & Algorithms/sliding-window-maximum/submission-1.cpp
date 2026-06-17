class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int>ans;
        int l=0;
        priority_queue<pair<int,int>>pq;
        for(int r=0;r<n;r++){
            pq.push({nums[r],r});
            if(r-l+1==k){
                
                  while (!pq.empty() && pq.top().second < l) {
                    pq.pop();
                }
                ans.push_back(pq.top().first);
                l++;
            }
        }
        return ans;
    }
};
