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
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);

    int n; cin >> n;
    vll arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vll srr = arr;
    ll cnt = 0;
    sort(srr.begin(), srr.end());
    for(int i = n-1; i >= 0; i--){
        if(arr[i] != srr[i]){
            cnt++;
            auto it = find(arr.begin(), arr.end(), srr[i]);
            ll ind = it - arr.begin();
            swap(arr[i], arr[ind]);
        }
    }
    cout << cnt << '\n';

    return 0;
}