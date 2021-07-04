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
    ll n, dp[15][10004];
    vector<ll> a;
    ll s ;
    ll solve(ll i, ll sum)
    {
        if(sum == 0)
            return 0;
        if(sum < 0)
            return 1e7;
        if(dp[i][sum] != -1)
            return dp[i][sum];
        ll ans = 1e7;
        for(int j = i; j < n; j++)
        {
            ans = min(ans, solve(j, sum - a[j]) + 1);
        }
        return dp[i][sum] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
       memset(dp, -1, sizeof(dp));
       n = coins.size();
       a = coins;
       s = amount;
       ll ans = solve(0, s);
        if(ans >= 1e7)
            return -1;
        else
            return ans;
    }
};