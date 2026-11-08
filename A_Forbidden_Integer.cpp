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
        ll n, k, x;
        cin >> n >> k >> x;
        vi a;
        bool pos = false;
        ll k1 = k;
        while(k1 > 0){
            if(k1 == x){
                k1--;
                continue;
            }
            ll num = n;
            ll rem = num%k1;
            if(rem == x){
                k1--;
                continue;
            }
            else{
                pos = true;
                while(num >= k1){
                    a.push_back(k1);
                    num -= k1;
                }
                if(num == 0){
                    break;
                }
                if(num - k1 < 0){
                    a.push_back(num);
                }
                break;
            }
        }
        if(pos){
            cout << "YES" << '\n';
            cout << a.size() << '\n';
            rep(i, 0, a.size()){
                cout << a[i] << " ";
            }
            cout << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}