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
        ll n,x;
        cin >> n >> x;
        ll zeros = 3*n-x;
        ll ones = x;
        vll a(n);
        ll e = ones;
        ll d = zeros;

        ll extra = abs(d-e);
        if(zeros < n-1){
            rep(i,0, 3*n){
                if(i%n == 0 && (d > 0)){
                    a[i] = '0';
                    d--;
                }
                else{
                    a[i] = '1';
                }
            }
            rep(i,0,3*n){
                cout << a[i];
            }
            cout << '\n';
            continue;
        }
        else if(zeros >= 2*n){
            rep(i,0, 3*n){
                if(i%n == 0 && (e > 0)){
                    a[i] = '1';
                    e--;
                }
                else{
                    a[i] = '0';
                }
            }
            rep(i,0,3*n){
                cout << a[i];
            }
            cout << '\n';
            continue;
        }

        else if(zeros >= n-1 && zeros < 2*n){
            rep(i,0, 3*n){
                if(i%n == 0){
                    if(e > 0){
                        a[i] = '1';
                        e--;
                    }
                    else{
                        a[i] = '0';
                        d--;
                    }
                }
                else if(i%n != 0){
                    if(d > 0){
                        a[i] = '0';
                        d--;
                    }
                    else{
                        a[i] = '1';
                        e--;
                    }
                }
            }
            rep(i,0,3*n){
                cout << a[i];
            }
            cout << '\n';
            continue;
        }
    }
    return 0;
}