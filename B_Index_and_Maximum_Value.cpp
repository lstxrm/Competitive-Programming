#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    fastio();
    int tc;
    cin >> tc;

    while(tc--){
        ll n, m;
        cin >> n >> m;
        
        ll maxm = -1;
        for(int i = 0; i < n; i++){
            ll val;
            cin >> val;
            maxm = max(maxm, val);
        }
        
        while(m--){
            char c;
            ll l, r;
            cin >> c >> l >> r;
            
            if(maxm >= l && maxm <= r){
                if(c == '+'){
                    maxm += 1;
                } else {
                    maxm -= 1;
                }
            }
            cout << maxm << ' ';
        }
        cout << '\n';
    }
    return 0;
}