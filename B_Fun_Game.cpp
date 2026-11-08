#pragma GCC optimize("O2")
#include <bits/stdc++.h>
//#ifndef ONLINE_JUDGE
//  #include "debug.h"
//#else
//  #define debug(x)
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
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int first_s = -1;
        int first_t = -1;
        rep(i, 0, n) {
            if (s[i] == '1') {
                first_s = i;
                break;
            }
        }
        rep(i, 0, n) {
            if (t[i] == '1') {
                first_t = i;
                break;
            }
        }
        if (first_t == -1) {
            cout << "Yes\n";
        } else if (first_s == -1) {
            cout << "No\n";
        } else if (first_t < first_s) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}