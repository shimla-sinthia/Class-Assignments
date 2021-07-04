//Bismillah Hir Rehmanir Rahim
//Allah knows best
#include<bits/stdc++.h>
using namespace std;
#define gap ' '
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
       ll n, sum;
       cin>> n >> sum;
       ll dp[n + 1][sum + 1];
       ll a[n];
       for(int i = 0; i < n; i++) cin >> a[i];

       for(int i = 0;i <= n; i++)
       {
          for(int j = 0;j <= sum; j++)
          dp[i][j] = 0;
       }
       for(int i = 0; i <= n; i++) dp[i][0] = 1;
       for(int i = 1; i <= n; i++)
       {
          for(int j = 1; j <= sum; j++)
          {
             if((j - a[i - 1]) >= 0)
             {
               dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
             }
             else
             {
                dp[i][j] = dp[i - 1][j];
             }
          }
       }
       cout << dp[n][sum] << endl;
       //deb(dp[n][sum/2]);
    }
   rr;
}