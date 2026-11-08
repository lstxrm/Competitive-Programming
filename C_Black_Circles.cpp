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
using pll = pair<ll,ll>;
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

ll dis(ll dx,ll dy,ll sx,ll sy){
    ll sqdist = (dx-sx)*(dx-sx) + (dy-sy)*(dy-sy);
    return sqdist;
}

int main(){
    fastio();
    int tc;
    cin >> tc;

    while(tc--){
        ll n;
        cin >> n;
        vector<pll> circ;
        rep(i,0,n){
            ll xi, yi;
            cin >> xi >> yi;
            circ.push_back({xi, yi});
        }
        ll xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;
        ll radi = dis(xt, yt, xs, ys);
        bool pos = false;
        rep(i,0,n){
            if(dis(circ[i].first, circ[i].second, xt, yt) <= radi){
                pos = true;
                break;
            }
            continue;
        }
        if(pos){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }
    return 0;
}