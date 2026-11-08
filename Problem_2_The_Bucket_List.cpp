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
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    
    int n;
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll> (3, -1));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    vll a(1001, 0);
    for(int i = 0; i < n; i++){
        for(int j = arr[i][0]; j <= arr[i][1]; j++){
            a[j] += arr[i][2];
        }
    }
    ll maxi = 0;
    for(int i = 1; i < a.size(); i++){
        maxi = max(maxi, a[i]);
    }
    cout << maxi << '\n';

    return 0;
}