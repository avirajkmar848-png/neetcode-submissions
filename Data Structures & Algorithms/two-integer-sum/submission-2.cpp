class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
     vector<int>ans(2);
     unordered_map<int,int>mp;
     for(int i=0;i<n;i++){
        mp[nums[i]]=i;
     } 
     for(int i=0;i<n;i++){
         if(mp.find(target-nums[i])!=mp.end()&&mp[target-nums[i]]!=i){
            ans[1]=mp[target-nums[i]];
            ans[0]=i;
            break;
                 }
     }
     return ans;
    }
};
