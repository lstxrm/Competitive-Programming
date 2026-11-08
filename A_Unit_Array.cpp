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
using vi = vector<int>;
using pii = pair<int,int>;
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
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        ll ones = 0;
        rep(i, 0, n){
            if(a[i] == 1){
                ones++;
            }
        }
        ll negones = n - ones;
        ll sum = ones - negones;
        ll pro = (negones%2 == 0)? 1 : -1;
        if(sum >= 0 && pro == 1){
            cout << 0 << '\n';
            continue;
        }
        if(sum >= 0 && pro == -1){
            cout << 1 << '\n';
            continue;
        }
        ll count = 0;
        while(sum < 0){
            sum += 2;
            pro *= -1;
            count++;
            if(sum >= 0){
                if(pro < 0){
                    count++;
                }
                break;
            }
        }
        cout << count << '\n';
    }
    return 0;
}