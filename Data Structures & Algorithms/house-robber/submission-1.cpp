class Solution {
public:
int helper(int i,vector<int>&nums,vector<int>&dp){
    if(i>=nums.size()){
       return 0;
    }
    if(dp[i]!=-1)return dp[i];
    return dp[i]=max(nums[i]+helper(i+2,nums,dp),helper(i+1,nums,dp));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return max(helper(0,nums,dp),helper(1,nums,dp));
    }
};
