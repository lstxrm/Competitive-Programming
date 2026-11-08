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
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    
    ll m, n, k;
    cin >> m >> n >> k;
    vector<vector<char>> arr(m, vector<char> (n, -1));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    ll kp1 = k;
    ll kp2 = k;
    for(int i = 0; i < m; i++){
        kp1 = k;
        while(kp1--){
            for(int j = 0; j < n; j++){
                kp2 = k;
                while(kp2--){
                    cout << arr[i][j];
                }
            }
            cout << '\n';
        }
    }

    return 0;
}