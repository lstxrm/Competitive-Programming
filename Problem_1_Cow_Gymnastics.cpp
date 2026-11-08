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
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    
    ll k, n;
    cin >> k >> n;
    vector<vector<ll>> arr(k, vector<ll> (n));
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    ll cnt = 0;
    bool g;
    for(int i = 1; i < n; i++){
        for(int j = i+1; j <= n; j++){
            for(int y = 0; y < k; y++){
                auto it1 = find(arr[y].begin(), arr[y].end(), i);
                auto it2 = find(arr[y].begin(), arr[y].end(), j);
                ll d1 = distance(arr[y].begin(), it1);
                ll d2 = distance(arr[y].begin(), it2);
                if(y == 0){
                    if(d1 > d2) g = true;
                    else g = false;
                }
                else{
                    if(g == true && d1 < d2) break;
                    else if(g == false && d1 > d2) break;
                }
                if(y == k-1) cnt++;
            }
        }
    }
    cout << cnt << '\n';

    return 0;
}