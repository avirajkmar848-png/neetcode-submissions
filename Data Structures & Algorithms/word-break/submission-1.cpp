class Solution {
public:
bool helper(string s,unordered_set<string>&st,int i,vector<int>&dp){
    if(i==s.size())return true;
    if(dp[i]!=-1)return dp[i];
    for(int j=i;j<s.size();j++){
        if(st.find(s.substr(i,j-i+1))!=st.end()){
            if(helper(s,st,j+1,dp)){
                dp[i]=true;
                return true;}
        }
    }
    dp[i]=false;
    return false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st(wordDict.begin(),wordDict.end());
        vector<int>dp(s.size()+1,-1);
        return helper(s,st,0,dp);
    }
};
