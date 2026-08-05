class Solution {
public:
bool dfs(int i,vector<vector<int>>&adj,vector<int>&vis,vector<int>&pathvis){
    vis[i]=1;
    pathvis[i]=1;
    for(auto it:adj[i]){
        if(!vis[it]){
            if(dfs(it,adj,vis,pathvis))return true;
        }
        else if(pathvis[it])return true;
    }
    pathvis[i]=0;
    return false;
}
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(n);
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,0);
       vector<int>pathvis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,pathvis))return false;
            }
        }
        return true;
    }
};
