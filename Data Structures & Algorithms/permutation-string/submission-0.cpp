class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
       vector<int>mp(26,0);
       vector<int>tp(26,0);
        for(int i=0;i<n;i++)mp[s1[i]-'a']++;
        int l=0;
        int r=0;
        while(r<m){
            tp[s2[r]-'a']++;
            if(r-l+1>n){
               tp[s2[l]-'a']--;
                l++;
            }
            if(mp==tp)return true;
            r++;
        }
        return false;
    }
};
