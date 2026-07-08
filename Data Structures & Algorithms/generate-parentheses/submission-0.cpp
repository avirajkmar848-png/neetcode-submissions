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
void helper(int n,vector<string>&ans,string s){
    if(s.size()==2*n){
        if(isvalid(s)) ans.push_back(s);
        return;
    }
    helper(n,ans,s+'(');
     helper(n,ans,s+')');
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        helper(n,ans,s);
        return ans;
    }
};
