class Solution {
public:
bool helper(int i,int j,vector<vector<char>>&board,string &word,int x){
    if(x==word.size())return true;
    if(i<0||j<0||j>=board[0].size()||i>=board.size()||board[i][j]!=word[x])return false;
    char temp=board[i][j];
    board[i][j]='*';
    bool check=helper(i+1,j,board,word,x+1)||helper(i-1,j,board,word,x+1)||helper(i,j+1,board,word,x+1)||helper(i,j-1,board,word,x+1);
    board[i][j]=temp;
    return check;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n= board.size();
        int m= board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(helper(i,j,board,word,0))return true;
            }
        }
        return false;
    }
};
