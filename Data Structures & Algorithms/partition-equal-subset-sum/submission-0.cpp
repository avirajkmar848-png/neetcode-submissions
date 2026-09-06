class Solution {
public:
bool helper(vector<int>&nums,int i, int sum,vector<vector<int>>&dp,int total){
     if(sum==total-sum)return true;
    if(i==nums.size())return false;
   
    if(dp[i][sum]!=-1)return dp[i][sum];
    bool take=helper(nums,i+1,sum+nums[i],dp,total);
    bool notake=helper(nums,i+1,sum,dp,total);
    return dp[i][sum]=take||notake;
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++)total+=nums[i];
        vector<vector<int>>dp(n+1,vector<int>(total+1,-1));
        return helper(nums,0,0,dp,total);
    }
};
