class Solution {
public:
int helper(int i,vector<int>&nums,int target,int sum,vector<vector<int>>&dp,int &total){
    if(i==nums.size()){
        if(sum==target)return 1;
        else return 0;
    }
    int idx=total+sum;
    if(dp[i][idx]!=-1)return dp[i][idx];
    return dp[i][idx]=helper(i+1,nums,target,sum+nums[i],dp,total)+helper(i+1,nums,target,sum-nums[i],dp,total);
    
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)sum+=nums[i];
       
        vector<vector<int>>dp(n,vector<int>(2*sum+1,-1));
        return helper(0,nums,target,0,dp,sum);
    }
};
