class Solution {
public:
int helper(string&s,int l,int r){
    while(l>=0&&r<s.size()&&s[l]==s[r]){
        l--;
        r++;
    }
    return r-l-1;
}
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int end=0;
        for(int i=0;i<n;i++){
            int oddlen=helper(s,i,i);
            int evenlen=helper(s,i,i+1);
            int maxlen=max(evenlen,oddlen);
            if(end-start<maxlen){
                start=i-(maxlen-1)/2;
                end=i+maxlen/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};
