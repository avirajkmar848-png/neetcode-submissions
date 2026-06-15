class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int ans=0;
        int l=0;
        int r=0;
       unordered_map<char,int>mp;
       int maxfrq=0;
        while(r<n){
            mp[s[r]]++;
            maxfrq=max(maxfrq,mp[s[r]]);
            while((r-l+1)-maxfrq>k){
               
              mp[s[l]]--;
               l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
