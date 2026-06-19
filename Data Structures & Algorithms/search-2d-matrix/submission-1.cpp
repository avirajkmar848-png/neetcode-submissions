class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0;
        int r=n-1;
        
        while(r>=l){
            int i=l+(r-l)/2;
            
            if(target<matrix[i][0])r=i-1;
            else if(target>matrix[i][m-1])l=i+1;
           else{
             int x=0;
            int y=m-1;
            while(y>=x){
                int j=x+(y-x)/2;
                if(matrix[i][j]==target)return true;
                else if(matrix[i][j]>target)y=j-1;
                else x=j+1;
            }
            return false;}
        }
        return false;
    }
};
