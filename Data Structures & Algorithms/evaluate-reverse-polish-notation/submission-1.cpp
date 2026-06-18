class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        stack<string>pt;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                pt.push(tokens[i]);
                 int val1=st.top();
            st.pop();
            int val2=st.top();
            st.pop();
            string x=pt.top();
            pt.pop();
            if(x=="+")st.push(val2+val1);
            else if(x=="-")st.push(val2-val1);
            else if(x=="*")st.push(val2*val1);
            else st.push(val2/val1);
            }
            else st.push(stoi(tokens[i]));
        }
       
        return st.top();
    }
};
