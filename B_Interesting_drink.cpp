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
        ll n;
        cin >> n;
        vll a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        ll q;
        cin >> q;
        vll m(q);
        rep(i, 0, q){
            cin >> m[i];
        }
        sort(all(a));
        rep(i, 0, q){
            auto it = upper_bound(a.begin(), a.end(), m[i]);
            cout << distance(a.begin(), it) << '\n';
        }
    // }
    return 0;
}