//Bismillah Hir Rehmanir Rahim
//Allah knows best
#include<bits/stdc++.h>
using namespace std;
#define gap ' '
#include <bitset>
#define mini -10000000000000000
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define f(i, a, n) for( i=a; i<n;i++)
#define ll long long
#define pi 3.141592653589793
#define vi              vector<ll>
#define si              set<ll>
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define rr              return 0
#define ff              first
#define in              insert
#define ss              second
ll hash58 = 288230376151711717;
ll hash32 = 1610612741;
#define erase_unique(st)        st.erase(unique(st.begin(), st.end()),st.end())
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define all(a) a.begin(), a.end()
typedef pair<ll, ll> pii;
#define setbits(x)      __builtin_popcountll(x)
#define zrbits(x)       __builtin_ctzll(x)
#define unset_bit(x,inx) x = (x & ~(1ll<<(inx)))
#define deb(x)          cout << #x << " = " << x << endl
#define set_bit(x, idx) x = x|1LL<<idx
#define check_bit(x, idx) min(x&(1LL<<idx),1LL)
#define toggle_bit(x, idx) x = x^(1LL<<idx)
inline ll uceil(ll a,ll b) {return (a % b ? a / b + 1 : a / b);}
#ifdef DEBUG
#define ok cerr << __LINE__ <<"is done "<<endl;
#else
#define ok 
#endif
#define ld long double
string a, b;
ll n, m;
ll dp[1003][1003];

int main()
{
   #ifndef DEBUG
   ios
   #endif
   int t=1;
   //cin>>t;
   int ct=0;
   string s;
   while(cin >> s)
   {
      if(s == "#")
      break;
      string tt;
      cin >> tt;
      a = s;
      b = tt;
      n = a.size();
      m = b.size();
      memset(dp, 0, sizeof(dp));
      for(int i = n - 1; i >= 0; i--)
      {
          for(int j = m - 1; j >= 0; j--)
          {
            if(a[i] == b[j])
            {
               dp[i][j] = 1 + dp[i + 1][j + 1];
            }
            else
            {
               dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
          }
      }
      ll ans = dp[0][0];
      //deb(ans);
      ll sum = (n - ans) * 15 + (m - ans) * 30;
      cout << sum << endl;
   }
  rr ;
}