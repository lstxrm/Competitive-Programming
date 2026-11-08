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
using pll = pair<long,long>;
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
    cin >> tc;

    while(tc--){
        ll n, m, q;
        cin >> n >> m >> q;
        vll b(m);
        rep(i,0,m){
            cin >> b[i];
        }
        ll q_i;
        cin >> q_i;
        sort(all(b));
        ll ans = 0;
        if(q_i < b[0]){
            ans = b[0]-1;
            cout << ans << '\n';
            continue;
        }
        if(q_i > b[m-1]){
            ans = n - b[m-1];
            cout << ans << '\n';
            continue;
        }
        rep(i,0,m-1){
            if((b[i] < q_i) && q_i < b[i+1]){
                ans = (b[i+1]-b[i])/2;
                cout << ans << '\n';
                break;
            }
        }   
    }
    return 0;
}