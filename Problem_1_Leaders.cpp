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
    //freopen("censor.in", "r", stdin);
    //freopen("censor.out", "w", stdout);

    int n;
    cin >> n;
    string s;
    cin >> s;
    vll arr(n);
    ll cntg = 0, cnth = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'G') cntg++;
        else cnth++;
    }
    ll lg = -1; ll lh = -1;
    ll fg = -1, fh = -1;
    ll cnt = 0;
    for(int i = n-1; i >= 0; i--){
        if(lg != -1 && lh != -1){
            if(s[i] == 'G' && lg == -1){ 
                lg = i;
            }
            else if(s[i] == 'H' && lh == -1) {
                lh = i;
            }
        }
        else break;
    }
    for(int i = 0; i < n; i++){
        if(fg != -1 && fh != -1){
            if(s[i] == 'G' && fg == -1){ 
                fg = i;
            }
            else if(s[i] == 'H' && fh == -1) {
                fh = i;
            }
        }
        else break;
    }
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<bool> all_pres(false), lead_pres(false);
    if(arr[fh]-1 >= lh){
        all_pres[fh] = true;
    }
    if(arr[fg] - 1 >= lg){
        all_pres[fg] = true;
    }
    if(s[0] == 'H'){
        for(int i = 0; i < fg; i++){
            if(all_pres[fg] == false) break;
            if(s[i] == 'H'){
                if(arr[i]-1 >= fg) cnt++;
            }
        }
    }
    else if(s[0] == 'G'){
        for(int i = 0; i < fh; i++){
            if(all_pres[fh] == false) break;
            if(s[i] == 'G'){
                if(arr[i]-1 >= fh) cnt++;
            }
        }
    }

    return 0;
}