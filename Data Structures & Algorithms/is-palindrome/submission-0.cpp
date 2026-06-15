class Solution {
public:
    bool isPalindrome(string s) {
      
       for(int i=0;i<s.size();){
        if(!isalnum(s[i]))s.erase(s.begin()+i);
        else i++;
       }
        int n= s.size();
       int lo=0;
       int hi=n-1;
       while(hi>lo){
        if(tolower(s[lo])!=tolower(s[hi]))return false;
       
            lo++;
            hi--;
        
       }
       return true; 
    }
};
