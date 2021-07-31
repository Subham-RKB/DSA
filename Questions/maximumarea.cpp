#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'largestRectangle' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY h as parameter.
 */

long largestRectangle(vector<int> h) {
    int n=h.size();
    vector<int> left(n),right(n);
    stack<int> s;
    for(int i=0;i<n;++i){
        if(s.empty()){
            left[i]=0;
            s.push(i);
        }
        else{
            while(!s.empty() && h[s.top()]>=h[i]){
                s.pop();
            }
            left[i]=s.empty()?0:s.top()+1;
            s.push(i);
        }
    }
    while(!s.empty()){
        s.pop();
    }
    for(int i=n-1;i>=0;--i){
        if(s.empty()){
            right[i]=n-1;
            s.push(i);
        }
        else{
            while(!s.empty() && h[s.top()]>=h[i]){
                s.pop();
            }
            right[i]=s.empty()?n-1:s.top()-1;
            s.push(i);
        }
    }
    int area=0;
    for(int i=0;i<n;i++){
        area=max(area,h[i]*(right[i]-left[i]+1));
    }
    return area;
    
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split(rtrim(h_temp_temp));

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    long result = largestRectangle(h);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
