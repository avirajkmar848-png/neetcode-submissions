class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st;
        stack<int>pt;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')st.push(i);
            if(s[i]=='*')pt.push(i);
            if(s[i]==')'){
                if(st.empty()&&pt.empty())return false;
                if(!st.empty())st.pop();
                else if(!pt.empty()) pt.pop();}
        }
        while(!st.empty()&&!pt.empty()){
            if(st.top()<pt.top()){
                st.pop();
                pt.pop();
            }
            else return false;
        }
return st.empty();

    }
};
