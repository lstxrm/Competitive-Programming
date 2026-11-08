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
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    ll b_x, b_y, r_x, r_y, l_x, l_y;
    vector<vector<char>> arr(10, vector<char> (10, -1));
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> arr[i][j];
            //b, r, l
            if(arr[i][j] == 'B'){
                b_x = i;
                b_y = j;
            }
            if(arr[i][j] == 'R'){
                r_x = i;
                r_y = j;
            }
            if(arr[i][j] == 'L'){
                l_x = i;
                l_y = j;
            }
        }
    }
    if(b_x == l_x && r_x == l_x){
        if ((b_y < r_y && r_y < l_y) || (l_y < r_y && r_y < b_y)){
            cout << abs(b_y-l_y)+1 << '\n';
            return 0;
        }
    }
    if(b_y == l_y && r_y == l_y){
        if ((b_x < r_x && r_x < l_x) || (l_x < r_x && r_x < b_x)) {
            cout << abs(b_x-l_x)+1 << '\n';
            return 0;
        }
    }
    cout << abs(l_x-b_x) + abs(l_y-b_y) - 1 << '\n';

    return 0;
}