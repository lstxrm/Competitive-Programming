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
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<string> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll count = arr[0].size();
    cout << arr[0];
    for(int i = 1 ; i < n; i++){
        if(count + arr[i].size() > k){
            cout << '\n' << arr[i];
            count = arr[i].size();
        }
        else{
            cout << " " << arr[i];
            count += arr[i].size();
        }
    }

    return 0;
}