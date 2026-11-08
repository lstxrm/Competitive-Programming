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
    int tc;
    //freopen("censor.in", "r", stdin);
    //freopen("censor.out", "w", stdout);
    cin >> tc;

    while(tc--){
        int n; cin >> n;
        vector<pll> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i].first >> p[i].second;
        }
        std::sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += p[i].first;
        }
        ll cnt = 0;
        for(int i = 0; i < n; i++){
            if(p[i].second >= sum){
                cnt += p[i].first;
                continue;
            }
            
        }
    }
    return 0;
}