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
    ll solve(ll l1, ll l2)
    {
        if(l1 >= n && l2 < m)
           return m - l2;
        if(l1 >= n && l2 >= m)
            return 0;
        if(l1 < n && l2 >= m)
            return n - l1;
        if(dp[l1][l2] != -1)
            return dp[l1][l2];
        ll ans = 1e7;
        if(a[l1] == b[l2])
            ans = solve(l1 + 1, l2 + 1);
        else
        {
          ans = min (ans, 1 + solve(l1 + 1, l2 + 1));
          ans = min (ans, 1 + solve(l1 + 1, l2));
          ans = min (ans, 1 + solve(l1, l2 + 1));
        }
       return dp[l1][l2] = ans;
    }
    int minDistance(string word1, string word2) {
        memset(dp, -1, sizeof(dp));
        a = word1, b = word2;
        n = a.size(), m = b.size();
        ll ans = solve(0, 0);
        return ans;
    }
};