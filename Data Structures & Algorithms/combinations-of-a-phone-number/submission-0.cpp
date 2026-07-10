class Solution {
public:
void helper(int x,string &digits, unordered_map<char,string>&mp,vector<string>&ans,string &s){
    if(x==digits.size()&&!s.empty()){
        ans.push_back(s);
        return;
    }
    for(int i=0;i<mp[digits[x]].size();i++){
        s.push_back(mp[digits[x]][i]);
        helper(x+1,digits,mp,ans,s);
        s.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp{{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        vector<string>ans;
        string s="";
        helper(0,digits,mp,ans,s);
       return ans;
    }
};
