class Solution {
public:
int helper(int i,int j,string &t,string &s,vector<vector<int>>&dp){
   
    if(i<0||j<0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(t[i]==s[j]) return dp[i][j]= 1+ helper(i-1,j-1,t,s,dp);
    return dp[i][j]=max(helper(i-1,j,t,s,dp),helper(i,j-1,t,s,dp));
}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       return helper(n-1,m-1,text1,text2,dp);
    }
};
