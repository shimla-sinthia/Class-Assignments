//Date: 2021-06-02 10:52:04
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll a, ll b)
{
ll ans = 1;
while(b>0)
{
if(b&1) {
    ans *= a;
    ans %= 1000;
    }
a *= a;
a %= 1000;
b >>= 1;
}
return ans;
}
int main()
{
    /*
    Main process :
    Num = n^k
        = a.bcd-------- * 10^p;
    => log10(Num) = log10(a.bcd------- * 10^p);
                  = log10(a.bcd-------) + log(10^p);
                  = log10(a.bcd-------) + p * (log10);
                  = log10(a.bcd-------) + p;
    => log10(a.bcd-------) = log10(Num) - p;
    => log10(a.bcd-------) = log10(n^k) - p;
    => log10(a.bcd-------) = k*log10(n) - p;
    Now, let, k*log10(n) - p = X;
    => log10(a.bcd-------) = X;
    => a.bcd------- = 10^X;
    => a.bcd---- * 100 = 10^X * 100;
    then we will gate 1st 3 digits;
    Last 3 digit is just calculate product n^k mod 1000;
    */
   ll t;
   cin >> t;
   for(int ct = 1; ct <= t; ct++)
   {
       cout << "Case "<< ct << ": ";
       ll k, n;
       cin >> n >> k;
       long double temp = (double)k * log10(n);
       ll temp2 = k * (log10(n));
       long double X = temp - double(temp2);
       ll ans1st = pow(10 , X) * 100;
       ll ans2nd = power(n, k);
       cout << ans1st << " ";;
       printf("%03d", ans2nd);
       cout << endl;
   }
   return 0;
}
   