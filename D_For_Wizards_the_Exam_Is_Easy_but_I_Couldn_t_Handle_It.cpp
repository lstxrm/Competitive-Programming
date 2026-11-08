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
        ll n;
        cin >> n;
        vll a(n);
        rep(i,0,n){
            cin >> a[i];
        }
        vll a1 = a;
        sort(a1.begin(), a1.end());
        if(a1 == a){
            cout << 1 << " " << 1 << '\n';
            continue;
        }
        ll best_l = 1;
        ll best_r = 1;
        ll net = 0;

        rep(l,0,n){
            ll current = 0;
            rep(r,l+1,n){
                if(a[l] > a[r]){
                    current--;
                }
                else if(a[l] < a[r]){
                    current++;
                }
                if(current < net){
                    net = current;
                    best_l = l+1;
                    best_r = r+1;
                }
            }
        }
        cout << best_l << " " << best_r << '\n';
    }
    return 0;
}