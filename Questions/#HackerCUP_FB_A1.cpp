#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    unordered_set<char> v = {'A', 'E', 'I', 'O', 'U'};
    for (int ii = 0; ii < t; ii++)
    {
        string s;
        cin >> s;
        unordered_map<char, int> vo;
        unordered_map<char, int> co;
        int vow = 0, con = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (v.find(s[i]) != v.end())
            {
                if (vo.find(s[i]) != vo.end())
                {
                    vo[s[i]]++;
                }
                else
                {
                    vo.insert({s[i], 1});
                }
                vow++;
            }
            else
            {
                if (co.find(s[i]) != co.end())
                {
                    co[s[i]]++;
                }
                else
                {
                    co.insert({s[i], 1});
                }
                con++;
            }
        }
        //cout << vow << " " << con << endl;
        int a = 0;
        char aa;
        for (auto i : vo)
        {
            if (i.second > a)
            {
                a = i.second;
                aa = i.first;
            }
        }
        int b = 0;
        char bb;
        for (auto i : co)
        {
            if (i.second > b)
            {
                b = i.second;
                bb = i.first;
            }
        }

        int ans1 = (con + (vow - a) * 2);
        int ans2 = (vow + (con - b) * 2);
        cout << "Case #" << (ii + 1) << ": " << min(ans1, ans2) << endl;
    }
}