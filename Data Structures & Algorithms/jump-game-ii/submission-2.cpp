class Solution {
public:
void helper(vector<int>&nums,int &ans,int i,int steps,vector<int>&dp){
    if(i>=nums.size()-1){
        ans=min(ans,steps);
       
        return;
    }
    if(nums[i]==0)return;
    if(dp[i]!=-1&&dp[i]<=steps)return;
     dp[i]=steps;
    for(int j=1;j<=nums[i];j++){
        helper(nums,ans,i+j,steps+1,dp);
    }
}
    int jump(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
      vector<int>dp(n+1,-1);
        helper(nums,ans,0,0,dp);
        return ans;
    }
};
