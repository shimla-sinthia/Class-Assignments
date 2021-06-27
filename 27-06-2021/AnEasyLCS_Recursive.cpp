//Bismillah Hir Rehmanir Rahim
//Allah knows best
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using    namespace __gnu_pbds;
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
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
#define multi_ordered_set       tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> rordered_set;
#ifdef DEBUG
#define ok cerr << __LINE__ <<"is done "<<endl;
#else
#define ok 
#endif
#define ld long double
#define ll int

string a, b;
ll n, m;
string dp[1003][1003];

string mni(string x, string y)
{
   if(x.size() > y.size())
   return x;
   else if(x.size() < y.size())
   return y;
   else{
      if(x < y)
      return x;
      else
      return y;
   }
}

string solve(ll i, ll j)
{
   if(i == n || j == m)
   return "";

   if(dp[i][j] != "#")
   return dp[i][j];
   string temp = "", temp1 = "", temp2 = "";
   if(a[i] == b[j])
   {
       temp = a[i] + solve(i + 1, j + 1);
   }
   else
   {
       temp1 = solve(i + 1, j);
       temp2 = solve(i, j + 1);
   }
   return dp[i][j] = mni(mni(temp, temp1), temp2);
}
int main()
{
   #ifndef DEBUG
   ios
   #endif
   int t=1;
   cin>>t;
   int ct=0;
   //string s;
   while(t--)
   {
      ct++;
      cout << "Case " << ct << ": "; 
      cin >> a >> b;
      n = a.size();
      m = b.size();
      for(int i = 0; i <= n; i++)
      {
          for(int j = 0; j <= m; j++)
          dp[i][j] = "#";
      }
      string ans = solve(0, 0);
      if(ans.size() > 0)
      cout << ans << endl;
      else cout << ":(" << endl;
   }
  rr;
}