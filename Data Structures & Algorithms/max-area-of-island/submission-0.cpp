class Solution {
public:
void dfs(int i,int j,vector<vector<int>>& grid,int &ans,int &area){
    if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]!=1){
        ans=max(ans,area);
        return;
    }
    area+=grid[i][j];
    grid[i][j]=2;
    dfs(i+1,j,grid,ans,area);
    dfs(i-1,j,grid,ans,area);
    dfs(i,j+1,grid,ans,area);
    dfs(i,j-1,grid,ans,area);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                int area=0;
                if(grid[i][j]==1)dfs(i,j,grid,ans,area);
            }
        }
        return ans;
    }
};
