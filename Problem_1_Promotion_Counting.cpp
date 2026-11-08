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
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    
    vector<vector<int>> arr(4, vector<int> (2,-1));
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }
    vector<int> ans;
    ll diff = arr[3][1]- arr[3][0];
    ans.push_back(diff);
    for(int i = 2; i > 0; i--){
        arr[i][0] -= diff;
        diff = arr[i][1] - arr[i][0];
        ans.push_back(diff);
    }
    for(int i = 2; i >= 0; i--){
        cout << ans[i] << '\n';
    }

    return 0;
}