class Solution {
public:
int helper(int i,vector<int>&coins,int amount,int sum,vector<vector<int>>&dp){
     if(sum==amount){
        return 0;
    }
    if(i>=coins.size()||sum>amount)return INT_MAX/2;;
   if(dp[i][sum]!=-1)return dp[i][sum];
   int notake=helper(i+1,coins,amount,sum,dp);
   int take=INT_MAX / 2;
   if(coins[i]<=amount-sum)take=1+helper(i,coins,amount,sum+coins[i],dp);
    return dp[i][sum]=min(take,notake);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       int ans= helper(0,coins,amount,0,dp);
       return ans>=INT_MAX/2?-1:ans;
    }
};
