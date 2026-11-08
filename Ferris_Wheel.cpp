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
    ll n,x;
    cin >> n >> x;
    vll a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    sort(all(a));
    ll check = 0;
    ll space = 0, cnt = 0;
    rep(i,0,n){
        if(check == 2){
            check = 0;
            space = 0;
            cnt++;
        }
        if(check == 0){
            space = 0;
        }
        space += a[i];
        if((space > x) && (check == 0)){
            cnt+=1;
            space = 0;
            check = 0;
        }
        if((space > x) && (check == 1)){
            cnt+=2;
            space = 0;
            check = 0;
        }
        check++;
    }
    if(check == 2){
        cnt++;
    }
    cout << cnt << '\n';

    return 0;
}