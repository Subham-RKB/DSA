#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int n;
    vector<int> arrival;
    vector<int> departure;
    void get()
    {
        cin >> n;
        int a, d;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arrival.push_back(a);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> d;
            departure.push_back(d);
        }
    }
    int platforms()
    {
        sort(arrival.begin(), arrival.end());
        sort(departure.begin(), departure.end());
        int ans = 1;
        int count = 1;
        int i = 1;
        int j = 0;
        while (i < n && j < n)
        {
            if (arrival[i] <= departure[j])
            {
                count++;
                i++;
            }
            else
            {
                count--;
                j++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
int main()
{
    Solution S;
    S.get();
    cout << S.platforms() << endl;
}
