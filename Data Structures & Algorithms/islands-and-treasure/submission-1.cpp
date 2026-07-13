class Solution {
public:

void helper(int i,int j,vector<vector<int>>& grid,int count,int & ans,vector<vector<bool>>&vis){
  
    if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==-1||vis[i][j]){
        return;
    }
 if(count>=ans)return;
     if(grid[i][j]==0){
        ans=min(count,ans);
        return;
    }
    vis[i][j]=true;
     helper(i+1,j,grid,count+1,ans,vis);
      helper(i-1,j,grid,count+1,ans,vis);
       helper(i,j+1,grid,count+1,ans,vis);
        helper(i,j-1,grid,count+1,ans,vis);
        vis[i][j]=false;
}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        
        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){
                int count=0;
                int ans=INT_MAX;
                if(grid[i][j]==2147483647){
                    vector<vector<bool>> vis(n, vector<bool>(m, false));
                    helper(i,j,grid,count,ans,vis);
                    grid[i][j]=ans;
                }
            }
        }
    }
};
