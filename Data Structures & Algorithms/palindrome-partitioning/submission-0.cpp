class Solution {
public:
void helper(string &s,int i,vector<vector<string>>&ans,vector<string>&arr,string temp){
    if(i==s.size()){
        ans.push_back(arr);
        return;
    }for(int j=i;j<s.size();j++){
        temp+=s[j];
    string check=temp;
    reverse(check.begin(),check.end());
    if(check==temp){arr.push_back(temp);
    helper(s,j+1,ans,arr,"");
    arr.pop_back();}}
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>arr;
        string temp;
        helper(s,0,ans,arr,temp);
        return ans;
    }
};
