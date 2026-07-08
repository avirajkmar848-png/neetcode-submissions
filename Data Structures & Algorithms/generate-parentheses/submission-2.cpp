class Solution {
public:
bool isvalid(string &s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')st.push(s[i]);
        else{
            if(!st.empty()&&st.top()=='(')st.pop();
            else st.push(s[i]);
        }
    }
    if(st.empty())return true;
    return false;
}
void helper(int n,int x,int y,vector<string>&ans,string &s){
    if(s.size()==2*n){
        if(isvalid(s)) ans.push_back(s);
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
