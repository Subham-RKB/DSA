class Solution
{
public:
    bool isValid(int row,int col,int n){
        return (row >= 0 && row < n && col >= 0 && col < n);
    }
    vector<int> executeInstructions(int n, vector<int> &startPos, string s)
    {
        int k = s.length();
        vector<int> ans;
        int row =startPos[0];
        int col=startPos[1];
        int currRow=row;
        int currCol=col;
        for(int i=0;i<k;i++){
            currRow=row;
            currCol=col;
            int gg=0;
            for(int j=i;j<k;j++){
                if(s[j]=='R') currCol++;
                else if(s[j]=='L') currCol--;
                else if(s[j]=='U') currRow--;
                else currRow++;
                if(isValid(currRow,currCol,n)){
                    gg++;
                }
                else break;
            }
            ans.push_back(gg);
            
        }
        return ans;
    }
};
// class Solution
// {
// public:
//     vector<int> executeInstructions(int n, vector<int> &startPos, string s)
//     {
//         int k = s.length();
//         vector<int> ans;

//         int c = 0;
//         for (int i = 0; i < k - 1; i++)
//         {
//             int gg = 0;
//             int l = startPos[1];
//             int r = n - startPos[1] - 1;
//             int u = startPos[0];
//             int d = n - 1 - startPos[0];
//             // cout<<l<<" "<<r<<" "<<u<<" "<<d<<endl;
//             int o = 0;
//             if (s[i] == 'R')
//             {
//                 if (r == 0)
//                     c = 1;
//                 else
//                 {
//                     l++;
//                     r--;
//                 }
//             }
//             else if (s[i] == 'L')
//             {
//                 if (l == 0)
//                     c = 1;
//                 else
//                 {
//                     r++;
//                     l--;
//                 }
//             }
//             else if (s[i] == 'U')
//             {
//                 if (u == 0)
//                     c = 1;
//                 else
//                 {
//                     d++;
//                     u--;
//                 }
//             }
//             else if (s[i] == 'D')
//             {
//                 if (d == 0)
//                     c = 1;
//                 else
//                 {
//                     u++;
//                     d--;
//                 }
//             }
//             if (c == 1)
//                 ans.push_back(0);
//             else
//             {
//                 gg++ : for (int j = i + 1; j < k; j++)
//                 {
//                     // cout<<s[j]<<" ";
//                     // o++;
//                     if (s[j] == 'R')
//                     {
//                         if (r == 0)
//                             c = 1;
//                         else
//                         {
//                             l++;
//                             r--;
//                         }
//                     }
//                     else if (s[j] == 'L')
//                     {
//                         if (l == 0)
//                             c = 1;
//                         else
//                         {
//                             r++;
//                             l--;
//                         }
//                     }
//                     else if (s[j] == 'U')
//                     {
//                         if (u == 0)
//                             c = 1;
//                         else
//                         {
//                             d++;
//                             u--;
//                         }
//                     }
//                     else if (s[j] == 'D')
//                     {
//                         if (d == 0)
//                             c = 1;
//                         else
//                         {
//                             u++;
//                             d--;
//                         }
//                     }
//                     // cout<<l<<" "<<r<<" "<<u<<" "<<d<<endl;
//                     if (c == 1)
//                     {
//                         break;
//                     }

//                     gg++;
//                 }
//                 ans.push_back(gg);
//             }
//             // cout<<o<<endl;
//         }
//         return ans;
//     }
// };