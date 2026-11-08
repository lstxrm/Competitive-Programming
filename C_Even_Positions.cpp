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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        bool mark = false;
        ll cost = 0;
        for(ll i = 0; i < n; i+=2){
            if(s[i+1] == '(' && mark == false){
                mark = true;
                s[i] = '(';
                cost += 1;
            }
            else if(s[i+1] == '(' && mark == true){
                s[i] = ')';
                cost += 3;
            }
            else if(s[i+1] == ')' && mark == true){
                s[i] = ')';
                mark = false;
                cost += 3;
            }
            else if(s[i+1] == ')' && mark == false){
                s[i] = '(';
                cost += 1;
            }
        }
        cout << cost << '\n';
    }
    return 0;
}