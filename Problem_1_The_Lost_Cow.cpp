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
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    
    int x, y;
    cin >> x >> y;
    ll diff = y-x;
    if(diff == 0){
        cout << 0 << '\n';
        return 0;
    }
    ll pos = 1;
    ll sum = 1;
    if(diff == 1){
        cout << 1 << '\n';
        return 0;
    }
    ll cost = 0;
    while(1){
        pos *= -2;
        sum += abs(pos/2)+ abs(pos);
        if(diff < 0 && pos <= diff){
            cost = sum - abs(pos - diff);
            cout << cost << '\n';
            break;
        } 
        if(diff > 0 && pos >= diff){
            cost = sum - abs(pos - diff);
            cout << cost << '\n';
            break;
        }
        
    }
    return 0;
}