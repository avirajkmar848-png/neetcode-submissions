class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<9;i++){
            unordered_set<char>s;
           for(int j=0;j<9;j++){
            if(board[i][j]=='.')continue;
            if(s.find(board[i][j])!=s.end())return false;
            s.insert(board[i][j]);
           }
        }
        for(int i=0;i<9;i++){
            unordered_set<char>s;
           for(int j=0;j<9;j++){
            if(board[j][i]=='.')continue;
            if(s.find(board[j][i])!=s.end())return false;
            s.insert(board[j][i]);
           }
        }
        for(int k=0;k<9;k++){
            unordered_set<char>s;
            for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
            int row=(k/3)*3+i;
            int col=(k%3)*3+j;
            if(board[row][col]=='.')continue;
            if(s.find(board[row][col])!=s.end())return false;
            s.insert(board[row][col]);
           }
        }
        }
        return true;
    }
};
