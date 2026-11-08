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
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int> temp;
    temp.push_back(arr[0]);
    ll cnt = 1;
    ll maxi = 1;
    for(int i = 1; i < n; i++){
        temp.push_back(arr[i]);
        cnt++;
        auto it = temp.begin();
        while(arr[i] - *it > k){
            it = temp.erase(it);
            cnt -= 1;
        }
        maxi = max(maxi, cnt);
    }
    cout << maxi << '\n';

    return 0;
}