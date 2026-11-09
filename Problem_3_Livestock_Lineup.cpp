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
    
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    int n; cin >> n;
    vector<pair<string, string>> constraints(n);
    for(int i = 0; i < n; i++){
        string a, dummy, b;
        cin >> a >> dummy >> dummy >> dummy >> dummy >> b;
        constraints[i] = {a, b};
    }
    vector<string> cows = {
        "Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"
    };
    do{
        bool valid = true;
        for(const auto& p : constraints){
            int p1 = -1, p2 = -1;
            for(int i = 0; i < 8; i++){
                if(cows[i] == p.first) p1 = i;
                if(cows[i] == p.second) p2 = i;
            }
            if(abs(p1-p2) != 1){
                valid = false;
                break;
            }
        }
        if(valid){
            for(const string& c : cows){
                cout << c << '\n';
            }
            break;
        }
    } while(next_permutation(cows.begin(), cows.end()));

    return 0;
}