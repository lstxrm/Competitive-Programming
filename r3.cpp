#include <bits/stdc++.h>
#include <numeric>
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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        ll count = 0;
        ll res = 0;
        int start = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] > r){
                res = 0;
                start = i + 1;
                continue;
            }
            
            res += arr[i];
            while(res > r && start <= i) {
                res -= arr[start];
                start++;
            }

            if(res >= l && res <= r){
                count++;
                res = 0;
                start = i + 1; 
            }
        }
        cout << count << '\n';
    }
    return 0;
}