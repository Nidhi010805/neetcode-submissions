class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int row=0;row<9;row++){
            unordered_set<char>mpp;
            for(int j=0;j<9;j++){
                if(board[row][j]=='.') continue;
            if(mpp.count(board[row][j]))
            return false;
            else
            mpp.insert(board[row][j]);
            }
        }
        for(int col=0;col<9;col++){
            unordered_set<char>mpp;
            for(int i=0;i<9;i++){
                if(board[i][col]=='.') continue;
            if(mpp.count(board[i][col]))
            return false;
            else
            mpp.insert(board[i][col]);
            }
        }
        for(int sqare=0;sqare<9;sqare++){
            unordered_set<char>mpp;
            for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int row=(sqare/3)*3+i;
                int col=(sqare%3)*3+j;
                if(board[row][col]=='.') continue;
            if(mpp.count(board[row][col]))
            return false;
            else
            mpp.insert(board[row][col]);
            }
            }
        }
        return true;
        
    }
};
