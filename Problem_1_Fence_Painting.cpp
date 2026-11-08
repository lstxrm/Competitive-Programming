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

void solve(ll a1, ll b1, ll a2, ll b2){
    if((a2 >= a1 && b2 <= b1) || (a1 >= a2 && b1 <= b2)){
        if(a2 <= a1 && b2 >= b1){
            swap(a1, a2);
            swap(b1, b2);
        }
        cout << b1-a1 << '\n';
        return;
    }
    if(a1 < a2){
        swap(a1, a2);
        swap(b1, b2); 
    }
    if(a1 <= b2){
        cout << b1-a2 << '\n';
        return;
    }
    else{
        cout << (b1-a1) + (b2-a2) << '\n';
        return;
    }
}

int main(){
    fastio();
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    ll a1, b1, a2, b2;
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    solve(a1, b1, a2, b2);
    
    return 0;
}