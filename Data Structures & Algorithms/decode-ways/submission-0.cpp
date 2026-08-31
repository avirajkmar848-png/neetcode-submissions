class Solution {
public:
int helper(int i,string &s,vector<int>&dp){
    if(i>=s.size())return 1;
    if(s[i]=='0')return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=helper(i+1,s,dp);
    if(i+1<s.size()){
        int num=(s[i]-'0')*10+(s[i+1]-'0');
        if(num>=10&&num<=26) ans+=helper(i+2,s,dp);
    }
    return dp[i]=ans;
}
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        return helper(0,s,dp);
    }
};
