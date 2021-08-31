#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int ii = 0; ii < t; ii++)
    {
        int n;
        cin >> n;
        char a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char aa;
                cin >> aa;
                a[i][j] = aa;
            }
        }
        vector<int> pos;
        int poss = 0;
        int mincount = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int ans = 0;
            int k = 1;
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '.')
                {
                    ans = ans + 1;
                }
                else if (a[i][j] == 'X')
                {
                    ans = ans;
                }
                else
                {
                    k = 0;
                    break;
                }
            }
            if (k)
            {
                if (mincount > ans)
                {
                    poss = 1;
                    mincount = ans;
                    pos.clear();
                    pos.push_back(i);
                }
                else if (mincount == ans)
                {
                    pos.push_back(i);
                    poss++;
                }
            }
            if (mincount == 1)
            {
                for (int o = 0; o < pos.size(); o++)
                {
                    int y = pos[o];
                    for (int oo = 0; oo < n; oo++)
                    {
                        if(a[y][oo]=='.') {
                            a[y][oo]='Y';
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int ans = 0;
            int k = 1;
            int cy = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] == '.')
                {
                    ans = ans + 1;
                }
                else if (a[j][i] == 'X')
                {
                    ans = ans;
                }
                else if (a[j][i] == 'Y')
                {
                    cy++;
                }
                else
                {
                    k = 0;
                    break;
                }
            }
            if (k)
            {
                if (cy == 1 && ans == 0)
                {
                    continue;
                }
                else
                {
                    if (mincount > ans)
                    {
                        mincount = ans;
                        poss = 1;
                    }
                    else if (mincount == ans)
                    {
                        poss++;
                    }
                }
            }
        }
        //int minn= *min_element(v.begin(),v.end());
        if (mincount == INT_MAX)
            cout << "Case #" << (ii + 1) << ": "
                 << "Impossible" << endl;
        else
        {
            cout << "Case #" << (ii + 1) << ": " << mincount << " " << poss << endl;
        }
    }
}