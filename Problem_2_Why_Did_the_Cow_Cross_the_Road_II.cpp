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

    vector<pll> pairs;
    string m;
    cin >> m;
    for(int i = 0; i < m.size(); i++){
        int j = i +1;
        while(m[j] != m[i] || j < m.size()){
            pll target = {m[i], m[j]};
            pll tar2 = {m[j], m[i]};
            auto it = find(pairs.begin(), pairs.end(), target);
            auto it2 = find(pairs.begin(), pairs.end(), tar2);
            if(it == pairs.end() && it2 == pairs.end()){
                pairs.push_back(target);
            }
            j++;
        }
    }
    cout << pairs.size() << '\n';

    return 0;
}