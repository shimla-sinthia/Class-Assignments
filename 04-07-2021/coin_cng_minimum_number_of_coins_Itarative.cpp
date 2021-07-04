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
    int coinChange(vector<int>& coins, int amount) {
       ll dp[15][10005];
       ll n = coins.size();
        //cout << n << endl;
        for(int i = 0; i <= n ; i++)
            for(int j = 0; j <= amount; j++)
                dp[i][j] = mod;
        
       for(int i=0;i<=n;i++) dp[i][0]=0;
        
       for(int i = 1; i <= n; i++)
       {
           for(int j = 1; j <= amount; j++)
           {
               if(coins[i - 1] > j)
                   dp[i][j] = dp[i - 1][j];
               else
               {
                   dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
               }
           }
       }
        if(dp[n][amount] == mod)
            return -1;
        else
            return dp[n][amount];
    }
};