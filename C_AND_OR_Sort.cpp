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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll f1 = -1;
        ll count = 0;
        if(s[0] == '1'){
            for(int i = 1; i < n; i++){
                if(s[i] == '0') count++; 
            }
            //print number of zeroes
            cout << count << '\n';
            continue;
        }
        ll t0 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') t0++;
            if(s[i] == '1' && f1 == -1){
                f1 = i;
            }
        }
        if(f1 == -1){
            cout << 0 << '\n';
            continue;
        }
        
        ll cur_cost = t0-f1;
        ll min_cost = cur_cost;

        for(int k = f1; k < n; k++){
            if(s[k] == '1') cur_cost++;
            else{
                cur_cost--;
            }
            min_cost = min(min_cost, cur_cost);
        }
        cout << min_cost << '\n';

    }
    return 0;
}