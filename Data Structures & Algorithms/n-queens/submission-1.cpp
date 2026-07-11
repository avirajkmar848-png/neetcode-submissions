class Solution {
public:
bool safe(int r,int c,vector<string>&arr){
    for(int i=r,j=c;i>=0&&j>=0;i--,j--){
        if(arr[i][j]=='Q')return false;
    }
    for(int i=r;i>=0;i--){
        if(arr[i][c]=='Q')return false;
    }
    for(int i=r,j=c;i>=0&&j<arr.size();i--,j++){
        if(arr[i][j]=='Q')return false;
    }
    return true;
}
void helper( vector<vector<string>>&ans,vector<string>&arr,int r){
    if(r==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int c=0;c<arr.size();c++){
        if(safe(r,c,arr)) {
            arr[r][c]='Q';
            helper(ans,arr,r+1);
            arr[r][c]='.';
            }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>arr(n,string(n,'.'));
        helper(ans,arr,0);
        return ans;
    }
};
