class Solution {
public:
bool safe(int r,int c,vector<string>&arr){
    for(int i=r,j=c;i>=0&&j>=0;i--,j--){
        if(arr[i][j]=='Q')return false;
    }
    for(int j=c;j>=0;j--){
        if(arr[r][j]=='Q')return false;
    }
    for(int i=r,j=c;i<arr.size()&&j>=0;i++,j--){
        if(arr[i][j]=='Q')return false;
    }
    return true;
}
void helper( vector<vector<string>>&ans,vector<string>&arr,int c){
    if(c==arr.size()){
        ans.push_back(arr);
    }
    for(int r=0;r<arr.size();r++){
        if(safe(r,c,arr)) {
            arr[r][c]='Q';
            helper(ans,arr,c+1);
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
