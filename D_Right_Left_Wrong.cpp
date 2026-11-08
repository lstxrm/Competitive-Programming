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
        vll a(n);
        rep(i,0,n){
            cin >> a[i];
        }
        vll p(n+1);
        p[0] = 0;
        p[1] = a[0];
        rep(i,2,n+1){
            p[i] = a[i-1]+p[i-1]; 
        }
        string s;
        cin >> s;
        ll start = 0;
        ll end = n-1;
        ll sum = 0;
        while(start < end){
            if(s[start] != 'L'){
                start++;
            }
            if(s[end] != 'R'){
                end--;
            }
            if(s[start] == 'L' && s[end] == 'R'){
                sum += p[end+1]-p[start];
                start++;
                end--;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}