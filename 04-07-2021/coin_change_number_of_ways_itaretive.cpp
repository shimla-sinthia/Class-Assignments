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
    
    int change(int amount, vector<int>& coins) {
        ll dp[coins.size() + 1][amount + 1];
        ll n = coins.size();
        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= amount; j++)
                dp[i][j] = 0;
        for(int i = 0; i <= n; i++)
            dp[i][0] = 1;
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= amount; j++)
            {
                if(coins[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
                }
            }
        }
        return dp[n][amount];
    }
};