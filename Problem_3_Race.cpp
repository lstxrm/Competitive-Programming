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
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);

    ll k, n;
    cin >> k >> n;
    while(n--){
        ll x;
        cin >> x;
        ll ans;

        if(k <= x*(x+1)/2){
            ll t = 0;
            while(t*(t+1)/2 < k) t++;
            ans = t;
        }
        else{
            ll base = x*(x-1)/2;
            ll v = x;
            while(v*v - base < k) v++;

            ll prev = (v-1)*(v-1) - base + (v-1);
            if(prev >= k) ans = 2*v - x -1;
            else ans = 2*v - x;
        }
        cout << ans << '\n';
    }

    return 0;
}