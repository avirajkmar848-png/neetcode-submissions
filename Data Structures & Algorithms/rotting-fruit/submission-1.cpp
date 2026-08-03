class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        int ans=0;
        int fresh=0;
        queue<pair<int,int>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(grid[i][j]==1)fresh++;
                if(grid[i][j]==2){
                    st.push({i,j});
                   
                }
            }
        }
        int dRow[]={1,0,-1,0};
        int dCol[]={0,1,0,-1};
        while(fresh>0&&!st.empty()){
             bool rotten=false;
             int x=st.size();
             while(x--){
            int r=st.front().first;
            int c=st.front().second;
            st.pop();
            for(int i=0;i<4;i++){
               
                int nr=r+dRow[i];
                int nc=c+dCol[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1){
                    grid[nr][nc]=2;
                    st.push({nr,nc});
                    rotten=true;
                    fresh--;
                }
            }}
            if(rotten) ans++;
        }
        if(fresh!=0)return -1;
        return ans;
    }
};
