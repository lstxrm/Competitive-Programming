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
        ll n;
        cin >> n;
        vector<int> arr(n);
        ll total = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            total += arr[i];
        }
        if(n <= 2){
            cout << -1 << '\n';
            continue;
        }
        sort(arr.begin(), arr.end());
        ll mid = n/2 + 1;
        ll reqtotal = arr[mid-1]*2*n + 1;
        ll init = total;
        ll ans = reqtotal - init;
        if(ans <= 0){
            cout << 0 << '\n';
        }
        else{
            cout << ans << '\n';
        }
    }
    return 0;
}