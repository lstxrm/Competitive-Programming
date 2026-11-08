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

int dist(int x, int y, vector<vll> arr){
    return sqrt((arr[y][0] - arr[x][0])*(arr[y][0] - arr[x][0]) + (arr[y][1] - arr[x][1])*(arr[y][1] - arr[x][1]));
}

int main(){
    fastio();
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);

    int n; cin >> n;
    vector<pll>pts;
    for(int i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        pts.push_back({x, y});
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll x_same = 0, y_same = 0;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(pts[i].first == pts[j].first && abs(pts[i].second - pts[j].second) > y_same){
                y_same = abs(pts[i].second - pts[j].second);
            }
            if(pts[i].second == pts[j].second && abs(pts[i].first - pts[j].first) > x_same){
                x_same = abs(pts[i].first - pts[j].first);
            }
        }
        ans = max(ans, (x_same)*(y_same));
    }
    cout << ans << '\n';

    return 0;
}