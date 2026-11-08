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
        ll l_a, r_a;
        cin >> l_a >> r_a;
        ll l_b, r_b;
        cin >> l_b >> r_b;
        if(r_a < l_b || r_b < l_a){
            cout << 1 << '\n';
            continue;
        }
        ll count = 0;
        vector<pll> elems;
        for(int i = l_a; i <= r_a; i++){
            for(int j = l_b; j <= r_b; j++){
                if(abs(i-j) == 1){
                    pll target = {j, i};
                    auto it = find(all(elems), target);
                    if(it == elems.end()){
                        elems.push_back({i, j});
                        count++;
                    }
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}