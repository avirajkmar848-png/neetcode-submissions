class Solution {
public:

void helper(int n,int x,int y,vector<string>&ans,string &s){
    if(s.size()==2*n){
       ans.push_back(s);
        return;
    }
    if(x<n){
        s.push_back('(');
        helper(n,x+1,y,ans,s);
        s.pop_back();}
    if(y<x) {
        s.push_back(')');
        helper(n,x,y+1,ans,s);
        s.pop_back();}
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        helper(n,0,0,ans,s);
        return ans;
    }
};
