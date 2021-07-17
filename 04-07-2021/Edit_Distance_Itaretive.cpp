//https://leetcode.com/problems/edit-distance/
#define endl '\n'
#define ll long long
#define mod             1000000007
#define rr              return 0
#define ff              first
#define in              insert
#define ss              second
#define ll int

class Solution {
public:
    string a, b;
    ll n, m;
    ll dp[510][510];
    int minDistance(string word1, string word2) {
        memset(dp, 0, sizeof(dp));
        a = word1, b = word2;
        n = a.size(), m = b.size();
        
        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= m; j++)
                dp[i][j] = 1e7;
        dp[0][0] = 0;
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                if(i == 0)
                {
                    dp[i][j] = j;
                }
                else if(j == 0)
                {
                    dp[i][j] = i;
                }
                else if(a[i - 1] == b[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = min(dp[i - 1][j - 1] + 1, min(dp[i - 1][j] + 1, dp[i][j - 1] + 1)); 
                }
            }
        }
            return dp[n][m];
    }
};
