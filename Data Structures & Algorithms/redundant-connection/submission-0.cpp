class Solution {
public:
bool dfs(vector<vector<int>>&adj,vector<int>&vis,int i,vector<int>&parent,vector<int>&ans){
    vis[i]=1;
    for(auto it:adj[i]){
        if(parent[i]==it){
            continue;
        }
        if(!vis[it]){
           parent[it]=i;
           if(dfs(adj,vis,it,parent,ans))return true;;
        }
        else {
            ans.push_back(it);
            int node =i;
            while(node!=it){
                ans.push_back(node);
                node=parent[node];
            }
            return true;
        }
    }
    return false;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<vector<int>>adj(n+1);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n+1,0);
        vector<int>ans;
        vector<int>parent(n+1,-1);
        dfs(adj,vis,1,parent,ans);
        vector<int>arr(n+1,0);
        
        for(auto x:ans){
            arr[x]=1;
        }
       for(int i=n-1;i>=0;i--){
        int u=edges[i][0];
        int v=edges[i][1];
        if(arr[u]&&arr[v])return{u,v};
       }
        return {};
    }
};
