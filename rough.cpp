// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to insert X in N and
// return the minimum value string
string MinValue(string N, int X)
{
 
    // Variable to store length
    // of string N
    int len = N.size();
 
    // Variable to denote the position
    // where X must be added
    int position = len + 1;
 
    // If the given string N represent
    // a negative value
    if (N[0] == '-') {
        // X must be place at the last
        // index where is greater than N[i]
        for (int i = len - 1; i >= 1; i--) {
            if ((N[i] - '0') < X) {
                position = i;
            }
        }
    }
    else {
        // For positive numbers, X must be
        // placed at the last index where
        // it is smaller than N[i]
        for (int i = len - 1; i >= 0; i--) {
            if ((N[i] - '0') >= X) {
                position = i;
            }
        }
    }
    // Insert X at that position
    if(position==len+1)
    cout<<position<<endl;
    N.insert(N.begin() + position, X + '0');
 
    // Return the string
    return N;
}
 
// Driver Code
int main()
{
    // Given Input
    string N ;
    cin>>N;
    int X ;
    cin>>X;
 
    // Function Call
    cout << MinValue(N, X) << "\n";
}