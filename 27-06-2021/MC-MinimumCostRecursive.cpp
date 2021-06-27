//Bismillah Hir Rehmanir Rahim
//Allah knows best
#include<bits/stdc++.h>
using namespace std;
#define gap ' '
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
ll sub_dp[1003][1003];

ll longest_subseq(ll i, ll j){  

if(i < 0 || j < 0) return 0;

if(sub_dp[i][j] != -1) return sub_dp[i][j];

 ll ans = 0;
 if(i >= 0 && j >= 0 && a[i] == b[j])
 {
ans = max(ans, 1 + longest_subseq(i-1, j-1));
return sub_dp[i][j] = ans;
 }
else
{
if(i >= 0) ans = max(ans, longest_subseq(i-1, j));
if(j >= 0) ans = max(ans, longest_subseq(i, j-1));
}
return sub_dp[i][j] = ans;
}
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
      memset(sub_dp, -1, sizeof(sub_dp));
      ll ans = longest_subseq(n - 1, m - 1);
      ll sum = (n - ans) * 15 + (m - ans) * 30;
      cout << sum << endl;
   }
  rr ;
}