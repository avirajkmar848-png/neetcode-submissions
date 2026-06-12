class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[nums[i]]++;
        vector<int>ans;
        while(k>0){
            int val=INT_MIN;
            int key;
             for(auto x:mp){
               if(x.second>val){
                val=x.second;
                key=x.first;
               }
            }
            mp.erase(key);
            ans.push_back(key);
            k--;
        }
        return ans;
    }
};
