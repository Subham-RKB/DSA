class Solution {
public:
    bool dfs(vector<vector<char>> &board,int i,int j,string& word,int index){
        if(index==word.size()) return true;
        if(i < 0 || j < 0 || i > board.size()-1 || j > board[0].size()-1) return false;
        if(board[i][j] != word[index]) return false;
        board[i][j]='*';
        bool search=dfs(board,i+1,j,word,index+1)||dfs(board,i-1,j,word,index+1)||dfs(board,i,j-1,word,index+1)||dfs(board,i,j+1,word,index+1);
        board[i][j]=word[index];
        return search;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
//         queue<pair<int,int>> q;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 set<pair<int,int>> s;
//                 int a=0;
//                 if(board[i][j]==word[a]){
//                      q.push(make_pair(i,j));   
//                 }
//                 s.insert(make_pair(i,j));
//                 while(!q.empty()){
//                     pair<int,int> pp=q.front();
//                     q.pop();
//                     a=a+1;
//                     int x=pp.first;
//                     int y=pp.second;
//                     if(x+1<n && word[a]==board[x+1][y] && s.find(make_pair(x+1,y))==s.end()){
//                         q.push(make_pair(x+1,y));
//                         s.insert(make_pair(x+1,y));
//                     }
//                     if(x-1>=0 && word[a]==board[x-1][y] && s.find(make_pair(x-1,y))==s.end()){
//                         q.push(make_pair(x-1,y));
//                         s.insert(make_pair(x-1,y));
//                     }
//                     if(y-1>=0 && word[a]==board[x][y-1] && s.find(make_pair(x,y-1))==s.end()){
//                         q.push(make_pair(x,y-1));
//                         s.insert(make_pair(x,y-1));
//                     }
//                     if(y+1<m && word[a]==board[x][y+1] && s.find(make_pair(x,y+1))==s.end()){
//                         q.push(make_pair(x,y+1));
//                         s.insert(make_pair(x,y+1));
//                     }
//                     if(a==word.length()) return true;
//                 }
                
//              }
//         }
//         return false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(board,i,j,word,0)) return true;
            }
        }
        return false;
    }
};