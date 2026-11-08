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
using pll = pair<long long, long>;
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

vector<pll> getPrimes(ll n){
    vector<pll> factors;
    long count = 0;
    if(n%2 == 0){
        while(n%2 == 0){
            count++;
            n /= 2;
        }
    }
    factors.push_back({2, count});
    
    for(ll i = 3; i*i <= n; i+=2){
        long count = 0;
        if(n%i == 0){
            while(n%i == 0){
                count++;
                n /= i;
            }
        }
        factors.push_back({i, count});
    }

    if(n>1){
        factors.push_back({n, 1});
    }
    return factors;
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
        vll b(n+1);
        b[0] = a[0];
        b[n] = a[n-1];

        rep(i,1,n){
            b[i] = (a[i-1]*a[i]/ __gcd(a[i], a[i-1]));
        }

        bool pos = true;
        rep(i,0,n){
            if(__gcd(b[i+1], b[i]) != a[i]){
                pos = false;
                break;
            }
        }
        if(pos){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}