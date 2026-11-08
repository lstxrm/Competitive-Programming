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
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);

    int n; cin >> n;
    vector<string> grid(n);
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    ll ans = 0;
    for(int r = n-1; r >= 0; r--){
        for(int c = n-1; c >= 0; c--){
            if(grid[r][c] == '1'){
                ans++;
                for(int i = 0; i <= r; i++){
                    for(int j = 0; j <= c; j++){
                        grid[i][j] = (grid[i][j] == '1' ? '0' : '1');
                    }
                }
            }
        }
    }
    cout << ans << '\n';

    return 0;
}