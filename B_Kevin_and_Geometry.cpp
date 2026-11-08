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
    cin >> tc;

    while(tc--){
        int n; cin >> n;
        vll a(n);
        rep(i, 0, n) cin >> a[i];
        sort(all(a));
        int p = -1;
        for(int i = n-2; i >= 0; i--){
            if(a[i] == a[i+1]){
                p = i;
                break;
            }
        }
        if(p == -1) {
            cout << -1 << '\n';
            continue;
        }

        vll rem;
        for(int i = 0; i < n; i++){
            if(i != p && i != p+1) rem.push_back(a[i]);
        }
        bool found = false;
        for(int i = 0; i < rem.size()-1; i++){
            if(rem[i+1] - rem[i] < 2* a[p]){
                found = true;
                cout << a[p] << " " << a[p] << " " << rem[i] << " " << rem[i+1] << '\n';
                break;
            }
        }
        if(!found) cout << -1 << '\n';
    }
    return 0;
}