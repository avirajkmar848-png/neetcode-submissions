class Solution {
public:
void dfs(int i,int j,vector<vector<int>>& heights,int x,int y,vector<vector<bool>>& vis){
    if(i<0||i>=heights.size()||j<0||j>=heights[0].size()||vis[i][j])return;
    if(x>=0&&y>=0&&heights[i][j]<heights[x][y])return;
    vis[i][j]=true;
    dfs(i+1,j,heights,i,j,vis);
    dfs(i-1,j,heights,i,j,vis);
    dfs(i,j-1,heights,i,j,vis);
    dfs(i,j+1,heights,i,j,vis);
}

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<bool>>vis1(n,vector<bool>(m));
         vector<vector<bool>>vis2(n,vector<bool>(m));
        for(int i=0;i<n;i++){
                dfs(i,0,heights,-1,-1,vis1);
                 dfs(i,m-1,heights,-1,-1,vis2);
           
        }
        
            for(int j=0;j<m;j++){
                dfs(0,j,heights,-1,-1,vis1);
                 dfs(n-1,j,heights,-1,-1,vis2);
            
        }
        vector<vector<int>>ans;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(vis1[i][j]&&vis2[i][j]){
                ans.push_back({i,j});
               }
            }

        }
        return ans;
    }
};
