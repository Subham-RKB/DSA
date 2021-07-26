#include <bits/stdc++.h>
using namespace std;
bool better(vector<int> &v,int m1,int m2,int m3,int m4 ,int m5){
                int c=0;
                if (v[0] < m1)
                {
                    c = c + 1;
                }
                if (v[1] < m2)
                {
                    c = c + 1;
                }
                if (v[2] < m3)
                {
                    c = c + 1;
                }

                if (v[3] < m4)
                {
                    c = c + 1;
                }

                if (v[4] < m5)
                {
                    c = c + 1;
                }
                if (c < 3)
                {
                    return true;
                }
                return false;
}
int main()
{
    int t;
    cin >> t;
    for (int ii = 0; ii < t; ii++)
    {
        int n;
        int a;
        cin >> n;
        vector<int> v;
        vector<vector<int>> vv;
        for (int i = 0; i < n; i++)
        {
            int c=0;
            int m1, m2, m3, m4, m5;
            cin >> m1 >> m2 >> m3 >> m4 >> m5;
            vv.push_back({m1,m2,m3,m4,m5});
            if (i == 0){
                v={m1, m2, m3, m4, m5};
            }
            else
            {
                if(better(v,m1,m2,m3,m4,m5)){
                    v={m1, m2, m3, m4, m5};
                }
            }
        }
        if(n==1){
            cout<<1<<endl;
        }
        else{
        int s=1;
        int h=0;
        for(int i=0;i<vv.size();i++){
            if(vv[i]==v){
                h=i;
            }
            if(better(vv[i],v[0],v[1],v[2],v[3],v[4])){
                //v=vv[i];
            }
            else{
                s=0;
                cout<<-1<<endl;
                break;
            }
            
        }
        if(s){
            cout<<h+1<<endl;           
        }
        }

    }
}