class Solution {
public:
    string longestPalindrome(string s) {
        int dp[1001][1001];
		int n = s.size();
		int size = 0;
		string  answer = "";
		for(int k = 0; k < n; ++k) {
			for(int i = 0; i + k < n; ++i) {
				int j = i + k;
				if(i == j) dp[i][j] = 1;
				else if(k == 1) dp[i][j] = s[i] == s[j];
				else {
					dp[i][j] = (dp[i+1][j-1] && s[i] == s[j]);
				}

				if(dp[i][j] and size < k + 1) {
					size = k + 1;
					answer = s.substr(i, k + 1);
				}
			}
		}
		return answer;
    }
};