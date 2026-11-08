#pragma GCC optimize("O2")
#include <bits/stdc++.h>
//#ifndef ONLINE_JUDGE
//	#include "debug.h"
//#else
//	#define debug(x)
//#endif
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using ll = long long;
using vll = vector<long long>;
using pll = pair<long,long>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define bits1(x) __builtin_popcount(x)
#define all(arr) arr.begin(),arr.end()
#define rev(arr) arr.rbegin(),arr.rend()
const ll mod = 998244353;
const int N = 2e5+10;
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    fastio();
    int tc;
    cin >> tc;

    while(tc--){
        ll n;
        cin >> n;
        vll c(n);
        ll m = 0;
        rep(i,0,n){
            cin >> c[i];
            if(c[i] >= 2){
                m++;
            }
        }
        ll ans = 0;
        if(m >= 2){
            ll sum = 0;
            ll cap = 0;
            rep(i,0,n){
                if(c[i] >= 2){
                    sum += c[i];
                    cap += (c[i]-2)/2;
                }
            }
            ll singles = n-m;
            ans = sum + min(singles, cap);
        }
        else if(m = 1){
            ll cmax = 0;
            rep(i,0,n){
                if(c[i] >= 2){
                    cmax = c[i];
                    break;
                }
            }
            ans = cmax + min(n-1, cmax/2);
        }
        else{
            ans = 0;
        }
        if(ans >= 3){
            cout << ans << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }
    return 0;
}