#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;

void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    fastio();

    ll n, k; 
    cin >> n >> k;
    vll arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll total_cost = k + 1; 

    for(int i = 1; i < n; i++){
        ll gap = arr[i] - arr[i-1];
        if(gap <= k) {
            total_cost += gap;
        } else {
            total_cost += k + 1;
        }
    }

    cout << total_cost << '\n';

    return 0;
}