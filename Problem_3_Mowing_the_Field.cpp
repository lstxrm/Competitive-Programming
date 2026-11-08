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
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
    
    int n; cin >> n;
    vector<pll> p;
    int s = 0, t = 0;
    p.push_back({s, t});
    ll mini = 1e8;
    for(int i = 0; i < n; i++){
        char dir; ll length;
        cin >> dir >> length;
        if(dir == 'N'){
            for(int i = t+1; i <= t+length; i++){
                pll target = {s, i};
                auto it = find(p.rbegin(), p.rend(), target);
                
                if(it != p.rend()){
                    ll space = 1 + (it - p.rbegin());
                    mini = min(mini, space);
                }
                p.push_back({s, i});
            }
            t += length;
        }
        else if(dir == 'S'){
            for(int i = t-1; i >= t-length; i--){
                pll target = {s, i};
                auto it = find(p.rbegin(), p.rend(), target);
                if(it != p.rend()) {
                    ll space = 1 + (it - p.rbegin());
                    mini = min(mini, space);
                }
                p.push_back({s, i});
            }
            t -= length;
        }
        else if(dir == 'E'){
            for(int i = s+1; i <= s+length; i++){
                pll target = {i, t};
                auto it = find(p.rbegin(), p.rend(), target);
                
                if(it != p.rend()){
                    ll space = 1 + (it - p.rbegin());
                    mini = min(mini, space);
                }
                p.push_back({i, t});
            }
            s += length;
        }
        else if(dir == 'W'){
            for(int i = s-1; i >= s-length; i--){
                pll target = {i, t};
                auto it = find(p.rbegin(), p.rend(), target);
                if(it != p.rend()) {
                    ll space = 1 + (it - p.rbegin());
                    mini = min(mini, space);
                }
                p.push_back({i, t});
            }
            s -= length;
        }
    }
    if(mini == 1e8) cout << -1 << '\n';
    else cout << mini << '\n';

    return 0;
}