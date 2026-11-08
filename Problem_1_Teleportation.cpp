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
using pll = pair<long long,long long>;
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
    
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a > b) swap(b, a);
    if(x > y) swap(x, y);
    ll diff1 = abs(x-a);
    ll diff2 = min(abs(b-x), abs(b-y));
    ll res = min(b-a, diff1 + diff2);
    cout << res << '\n';

    return 0;
}