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
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    vll arr(3);
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    sort(all(arr));
    ll diff1 = arr[1]-arr[0]-1;
    ll diff2 = arr[2]-arr[1]-1;
    ll mn;
    if(diff1 == 0 && diff2 == 0) mn = 0;
    else if(diff1 == 1 || diff2 == 1) mn = 1;
    else mn = 2;
    cout << mn << '\n';
    cout << max(diff1, diff2) << '\n';

    return 0;
}