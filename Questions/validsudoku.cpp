class Solution {
public:
    bool checkRow(int r,vector<vector<char>> &board){
        set<int> s;
        for(int i=0;i<9;i++){
            if(s.find(board[r][i])!=s.end()) return false;
            else if(board[r][i]!='.'){
                s.insert(board[r][i]);
            }
        }
        return true;
    }
    bool checkCol(int c,vector<vector<char>> &board){
        set<int> s;
        for(int i=0;i<9;i++){
            if(s.find(board[i][c])!=s.end()) return false;
            else if(board[i][c]!='.'){
                s.insert(board[i][c]);
            }
        }
        return true;
    }
    bool checkBox(int r,int c,vector<vector<char>> &board){
        set<int> s;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(s.find(board[i+r][j+c])!=s.end()){
                    return false;
                }
                else if(board[i+r][j+c]!='.'){
                    s.insert(board[i+r][j+c]);
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(!(checkRow(i,board)&&checkCol(j,board)&&checkBox(i-i%3,j-j%3,board))){
                    return false;
                }
            }
        }
        return true;
    }
};