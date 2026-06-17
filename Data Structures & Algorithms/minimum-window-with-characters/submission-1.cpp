class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m= t.size();
        if(m>n)return "";
        if(s==t)return s;
       if(t=="")return "";
       unordered_map<char,int>count;
       for(int i=0;i<m;i++)count[t[i]]++;
       unordered_map<char,int>mp;
       int need=count.size();
       int have=0;
       pair<int,int>res{-1,-1};
       int reslen=INT_MAX;
       int l=0;
       for(int r=0;r<n;r++){
        mp[s[r]]++;
        if(count.find(s[r])!=count.end()&&count[s[r]]==mp[s[r]]){
            have++;
        }
       while(have==need){
        if(r-l+1<reslen){
            reslen=r-l+1;
            res={l,r};}
        
        mp[s[l]]--;
        if(count.find(s[l])!=count.end()&&count[s[l]]>mp[s[l]]){
            have--;
        }
        l++;}
       }
       return reslen==INT_MAX ?"":s.substr(res.first,reslen);
    }
};
