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
    cin >> tc;

    while(tc--){
        string s;
        cin >> s;
        ll ss = s.size();
        string t;
        cin >> t;
        ll ts = t.size();
        auto s_pt = s.begin();
        auto t_pt = t.begin();
        while((s_pt != s.end()) && (t_pt != t.end())){
            if(*s_pt == *t_pt){
                t_pt++;
            }
            if(*s_pt == '?'){
                *s_pt = *t_pt;
                t_pt++;
            }
            s_pt++;
        }
        if(t_pt != t.end()){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
            rep(i,0,ss){
                if(s[i] == '?'){
                    s[i] = 'a';
                }
            }
            cout << s << '\n';
        }
    }
    return 0;
}