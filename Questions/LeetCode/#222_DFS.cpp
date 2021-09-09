class Solution {
public:
    //vector<vector<int>> v;
    void helper(vector<vector<char>>& board,int i,int j,int r,int c){
        if(i<0 or j<0 or i>=r or j>=c or board[i][j]!='O') return;
        board[i][j]='#';
        helper(board,i-1,j,r,c);
        helper(board,i+1,j,r,c);
        helper(board,i,j-1,r,c);
        helper(board,i,j+1,r,c);
        // queue<pair<int,int>> q;
        // q.push(p);
        // while(!q.empty()){
        //     pair<int,int> pp=q.front();
        //     q.pop();
        //     int ro=pp.first;
        //     int co=pp.second;
        //     if(ro+1<r && board[ro+1][co]){
        //         board[ro+1][co]='#';
        //         q.push(make_pair(ro+1,co));
        //     }
        //     if(ro-1>=0 && board[ro-1][co]){
        //         board[ro-1][co]='#';
        //         q.push(make_pair(ro-1,co));
        //     }
        //     if(co+1<c && board[ro][co+1]){
        //         board[ro][co+1]='#';
        //         q.push(make_pair(ro,co+1));
        //     }
        //     if(co-1>=0 && board[ro][co-1]){
        //         board[ro][co-1]='#';
        //         q.push(make_pair(ro,co-1));
        //     }
        // }
    }
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        if(r==0) return;
        int c=board[0].size();
        for(int i=0;i<r;i++){
            if(board[i][0]=='O'){
                // board[i][0]='#';
                // pair<int,int> p;
                // p.first=i;
                // p.second=0;
                helper(board,i,0,r,c);
            }
            if(board[i][c-1]=='O'){
                // board[i][c-1]='#';
                // pair<int,int> p;
                // p.first=i;
                // p.second=c-1;
                helper(board,i,c-1,r,c);
            }
        }
        for(int i=0;i<c;i++){
            if(board[0][i]=='O'){
                // board[0][i]='#';
                // pair<int,int> p;
                // p.first=0;
                // p.second=i;
                helper(board,0,i,r,c);
            }
            if(board[r-1][i]=='O'){
                // board[r-1][i]='#';
                // pair<int,int> p;
                // p.first=r-1;
                // p.second=i;
                helper(board,r-1,i,r,c);
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
                else if(board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};