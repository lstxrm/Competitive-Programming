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
    
    vll a(7);
    for(int i = 0; i < 7; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll a1 = a[0];
    ll b = a[1];
    ll c = -1;
    if(a[2] != a[0]+a[1]) c = a[2];
    else if(a[2] == a[3]) c = a[2];
    else{
        c = a[3];
    }
    cout << a1 << " " << b << " " << c << '\n';

    return 0;
}