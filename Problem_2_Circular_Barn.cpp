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
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    
    int n; cin >> n;
    vll arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll sum = 0;
    ll mini = 1e8;
    for(int turn = 0; turn < n; turn++){
        sum = 0;
        ll first = arr[0];
        for(int i = 0; i < n; i++){
            sum += arr[i]*i;
            if(i == n-1) arr[i] = first;
            else arr[i] = arr[i+1];
        }
        mini = min(mini, sum);
    }
    cout << mini << '\n';
    return 0;
}