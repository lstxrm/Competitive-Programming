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
    // int tc;
    // cin >> tc;

    // while(tc--){
    ll n, m;
    cin >> n >> m;
    vll a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    ll r = 0;
    vll b(m);
    rep(i,0,m){
        cin >> b[i];
    }
    rep(i, 0, n){
        ll ind = lower_bound(b.begin(), b.end(), a[i])-b.begin()-1, d = 1e18;
        if(ind >=0) d = min(d, a[i] - b[ind]);
        if(ind+1 < m) d = min(d, b[ind+1]-a[i]);
        r = max(r, d);
    }
    cout << r << '\n';
    // }
    return 0;
}