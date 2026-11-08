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

vector<ll> memo;

ll f(ll x, ll y, ll m, ll nums){
    if(nums + min(x, y) > m) return nums;
    if(memo[nums] != -1) return memo[nums];
    ll c1 = 0, c2 = 0;
    if(nums + x <= m) c1 = f(x, y, m, nums+x);
    if(nums + y <= m) c2 = f(x, y, m , nums+y);
    return memo[nums] = max(c1, c2);
}

int main(){
    fastio();
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    
    ll x, y, m;
    cin >> x >> y >> m;
    memo.assign(m+1, -1);
    ll nums = 0;
    cout << f(x, y, m, nums) << '\n';

    return 0;
}