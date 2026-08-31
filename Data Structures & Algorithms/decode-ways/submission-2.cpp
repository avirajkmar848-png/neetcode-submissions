class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            if(i>=s.size())return 1;
    if(s[i]=='0'){
        dp[i]=0;
        continue;}
    if(dp[i]!=-1)return dp[i];
    int ans=dp[i+1];
    if(i+1<s.size()){
        int num=(s[i]-'0')*10+(s[i+1]-'0');
        if(num>=10&&num<=26) ans+=dp[i+2];
    }
    dp[i]=ans;
        }
        return dp[0];
    }
};
