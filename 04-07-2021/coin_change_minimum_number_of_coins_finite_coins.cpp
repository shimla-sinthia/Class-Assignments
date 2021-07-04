//Bismillah Hir Rehmanir Rahim
//Allah knows best
#include<bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define ll long long
int main(){
   #ifndef DEBUG
   ios
   #endif
   int t=1;
   //cin>>t;
   int ct=0;
   while(t--)
    {
     
       ll n, sum ;
       cin >> n >> sum;
        ll dp[n + 1][sum + 1];

        for(int i = 0; i <= n ; i++)
            for(int j = 0; j <= sum; j++)
                dp[i][j] = mod;

        ll coins[n];
        for(int i = 0; i < n; i++) cin >> coins[i];

       for(int i = 0; i <= n;i++) dp[i][0] = 0;
        
       for(int i = 1; i <= n; i++)
       {
           for(int j = 1; j <= sum; j++)
           {
               if(coins[i - 1] > j)
                   dp[i][j] = dp[i - 1][j];
               else
               {
                   dp[i][j] = min(dp[i - 1][j], 1 + dp[i - 1][j - coins[i - 1]]);
               }
           }
       }
        if(dp[n][sum] == mod)
            cout << -1 << endl;
        else
            cout << dp[n][sum] << endl;
    }
   rr;
}

