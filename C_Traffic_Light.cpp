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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        string s1 = s + s;
        ll count = 0;
        bool on = false;
        ll maxm = -1;
        rep(i,0,2*n){
            if(on){
                count++;
            }
            if(s1[i] == c && (!on)){
                count = 0;
                on = true;
            }
            if((s1[i] == 'g') && (on == true)){
                maxm = max(maxm, count);
                on = false;
            }
        }
        cout << maxm << '\n';
    }
    return 0;
}