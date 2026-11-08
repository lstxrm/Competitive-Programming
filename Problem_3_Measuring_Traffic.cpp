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
    // freopen("traffic.in", "r", stdin);
    // freopen("traffic.out", "w", stdout);
    
    int n; cin >> n;
    ll on_s, on_e;
    ll off_s, off_e;
    ll none_s, none_e;
    ll min_n = 1e8; ll max_n = -1e8;
    for(int i = 0; i < n; i++){
        string ty;
        cin >> ty;
        if(ty == "on"){
            cin >> on_s >> on_e;
        }
        else if(ty == "off"){
            cin >> off_s >> off_e;
        }
        else{
            cin >> none_s >> none_e;
            min_n = min(min_n, none_e);
            max_n = max(max_n, none_s);
        }
    }
    min_n = max(min_n, 1LL*0);
    max_n = min(max_n, 1LL*1000);
    ll max_ons, min_ons, max_offs, min_offs;
    max_ons = max(on_s, on_e);
    min_ons = min(on_s, on_e);
    max_offs = max(off_s, off_e);
    min_offs = min(off_s, off_e);
    cout << min_n - max_ons << " " << max_n - min_ons << '\n';
    cout << min_n - max_offs << " " << max_n - min_offs << '\n';

    return 0;
}