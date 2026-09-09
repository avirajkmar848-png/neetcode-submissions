class Solution {
public:
int helper(int i,int amount,vector<int>&coins,vector<vector<int>>&dp,int sum){
    if(sum==amount )return 1;
    if(i>=coins.size()||sum>amount)return 0;
    if(dp[i][sum]!=-1)return dp[i][sum];
    int notake=helper(i+1,amount,coins,dp,sum);
    int take= take=helper(i,amount,coins,dp,sum+coins[i]);
   return dp[i][sum]=take+notake;
}
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return helper(0,amount,coins,dp,0);
    }
};
