#include <bits/stdc++.h>
using namespace std;
int maxx(vector<int> vec)
{
    map<int, int> M;
 
    for (int i = 0; vec[i]; i++) {
        if (M.find(vec[i]) == M.end()) {
            M[vec[i]] = 1;
        }
        else {
            M[vec[i]]++;
        }
    }
    vector<int> v;
    for(auto& it:M){
        v.push_back(it.second);
    }
    return *max_element(v.begin(),v.end());
 
}
int main()
{
    int t, g00, g01, g02, g10, g12, g20, g21, g22;
    cin >> t;
    for(int ii=0;ii<t;ii++)
    {
        cin >> g00 >> g01 >> g02 >> g10 >> g12 >> g20 >> g21 >> g22;
        vector<int> v;
        v.push_back((g00 + g22) / 2);
        v.push_back((g02 + g20) / 2);
        v.push_back((g01 + g21) / 2);
        v.push_back((g10 + g12) / 2);
        int s = maxx(v);
        //cout << s<<endl;
        int a = s;
        for (int i = 0; i < 4; i++)
        {
            if (v[i] == s)
            {
                a = a + 1;
            }
        }
        if ((g00 + g02) / 2 == g01)
        {
            a = a + 1;
        }
        if ((g00 + g20) / 2 == g10)
        {
            a = a + 1;
        }
        if ((g02 + g22) / 2 == g12)
        {
            a = a + 1;
        }
        if ((g20 + g22) / 2 == g21)
        {
            a = a + 1;
        }
        cout<<"Case #"<<(ii+1)<<": "<<a<<endl;
    }
}
