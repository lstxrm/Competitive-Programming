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
        ll a, b, x;
        cin >> a >> b >> x;
        vector<ll> A, B;
        A.push_back(a);
        B.push_back(b);
        while(a > 0){
            a /= x;
            A.push_back(a);
        }
        while(b > 0){
            b /= x;
            B.push_back(b);
        }
        ll ans = 1e18;
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < B.size(); j++){
                ans = min(ans, 1LL * i + j +  abs(A[i] - B[j]));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}