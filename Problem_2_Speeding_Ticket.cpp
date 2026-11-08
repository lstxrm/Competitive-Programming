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
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    
    int n, m;
    cin >> n >> m;
    
    vector<ll> speed_limit(100);
    ll cur = 0;
    for(int i = 0; i < n; i++){
        ll length, limit;
        cin >> length >> limit;
        for(int k = 0; k < length; k++){
            speed_limit[cur++] = limit; 
        }
    }
    vector<int> bessie_speed(100);
    cur = 0;
    for(int i = 0; i < m; i++){
        ll length, speed;
        cin >> length >> speed;
        for(int k = 0; k < length; k++){
            bessie_speed[cur++] = speed;
        }
    }

    ll maxi = 0;
    for(int i = 0; i < 100; i++){
        maxi = max(maxi, bessie_speed[i] - speed_limit[i]);
    }
    cout << maxi << '\n';

    return 0;
}