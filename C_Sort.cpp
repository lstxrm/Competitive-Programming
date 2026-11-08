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
const int N = 2e5+20;
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    fastio();
    int tc;
    cin >> tc;

    while(tc--){
        ll n, q;
        cin >> n >> q;
        string s[2];
        cin >> s[0] >> s[1];
        vector<vector<vector<int>>> pref(2, vector<vector<int>>(26, vector<int>(n + 1, 0)));

        for(int t: {0,1}){
            for(int c = 0; c < 26; c++){
                for(int i = 0; i < n; i++){
                    pref[t][c][i+1] = pref[t][c][i] + (s[t][i] - 'a' == c);
                }
            }
        }

        while(q--){
            ll l, r;
            cin >> l >> r;
            l--;

            ll total = 0;
            rep(c,0,26){
                ll num1 = pref[0][c][r] - pref[0][c][l];
                ll num2 = pref[1][c][r] - pref[1][c][l];
                total += abs(num1-num2);
            }
            cout << total/2 << '\n';
        }
    }
    return 0;
}