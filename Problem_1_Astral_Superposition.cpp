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
    //freopen("censor.in", "r", stdin);
    //freopen("censor.out", "w", stdout);
    cin >> tc;

    while(tc--){
        int n, a, b;
        cin >> n >> a >> b;
        vector<vector<char>> arr(n, vector<char> (n));
        vector<pll> coor;
        vector<bool> black;
        vector<bool> cov;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
                if(arr[i][j] == 'G'){
                    black.push_back(false);
                    coor.push_back({i, j});
                }
                else if(arr[i][j] == 'B'){
                    black.push_back(true);
                    coor.push_back({i, j});
                }
            }
        }
        if(a == 0 && b == 0){
            cout << coor.size() << '\n';
            continue;
        }
        ll ans = 0;
        bool comp = false;
        for(int i = 0; i < black.size(); i++){
            if(black[i] == true){
                pll target = {coor[i].first - b, coor[i].second - a};
                auto it = find(coor.begin(), coor.end(), target);
                if(it == coor.end()){
                    cout << -1 << '\n';
                    comp = true;
                    break;
                }
            }
        }
        if(comp) continue;
        for(int i = 0; i < coor.size(); i++){
            pll target = {coor[i].first + b, coor[i].second + a};
            auto it = find(coor.begin(), coor.end(), target);
            if(it != coor.end() && black[i] == false){
                coor.erase(it);
            }
        }
        cout << coor.size() << '\n';
    }
    return 0;
}