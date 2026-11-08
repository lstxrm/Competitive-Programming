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
        ll n;
        cin >> n;
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        ll cnt = 0;
        bool pos = true;
        //detecting the spot
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == '.'){

            }
            if((i > 0 && i < n-1) && (s1[i] == s2[i]) && s1[i] == '.' && s2[i-1] == 'x' && s2[i+1] == 'x' && (s1[i-1] == '.' && s1[i+1] == '.')){
                cnt++;
            }
        }
        for(int i = 0; i < s2.size(); i++){
            if((i > 0 && i < n-1) && (s1[i] == s2[i]) && s2[i] == '.' && s1[i-1] == 'x' && s1[i+1] == 'x' && (s2[i-1] == '.' && s2[i+1] == '.')){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}