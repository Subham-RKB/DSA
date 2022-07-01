#include <bits/stdc++.h>
using namespace std;
class Time
{
public:
    int start;
    int end;
    int pos;
    // Time(int start,int end,int pos){
    //     this->start= start;
    //     this->end = end;
    //     this->pos = pos;
    // }
};
class Solution
{
public:
    bool static comp(Time &t1, Time &t2)
    {
        if (t1.end < t2.end)
            return true;
        // else if(t1.end>t2.end) return false;
        // else if(t1.pos<t2.pos) return false;
        return false;
    }
    void meetings(vector<int> &s, vector<int> &e, int n)
    {
        Time T[n];
        for (int i = 0; i < n; i++)
        {
            T[i].start = s[i];
            T[i].end = e[i];
            T[i].pos = i + 1;
        }
        sort(T, T + n, comp);
        vector<int> answer;
        int k = T[0].end;
        answer.push_back(T[0].pos);
        for (int i = 1; i < n; i++)
        {
            if (T[i].start > k)
            {
                k = T[i].start;
                answer.push_back(T[i].pos);
            }
        }
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Solution S;
    int n, s, e;
    cin >> n;
    vector<int> start;
    vector<int> end;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        start.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        end.push_back(e);
    }
    S.meetings(start, end, n);
}