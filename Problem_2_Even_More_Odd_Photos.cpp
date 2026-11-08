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

    int n; cin >> n;
    vll arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0) even++;
        else odd++;
    }
    ll cnt = 0;
    ll tick = 0;
    while(even != 0 || odd != 0){
        if((even != 0 && tick%2 == 0) || (odd != 0 && tick%2 != 0)){
            if(tick % 2 == 0) even--;
            else odd--;
            cnt++;
        }
        else if(even == 0 && odd != 0 && tick%2 == 0){
            if(odd == 1){
                cnt--; odd = 0;
                break;
            }
            else{
                odd -= 2;
                cnt++;
            }
        }
        else if(even != 0 && odd == 0 && (tick%2 != 0)){
            even = 0;
        }
        tick++;
    }
    cout << cnt << '\n';

    return 0;
}