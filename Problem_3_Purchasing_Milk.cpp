#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
using pll = pair<long long,long long>;

void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    fastio();

    int n, q;
    cin >> n >> q;
    vll arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    n = min(n, 31);

    vector<pll> s_ones;
    s_ones.push_back({arr[0], 1});
    ll lead = 0;
    ll mul = 2;
    for(int i = 1; i < n; i++){
        if(arr[i] > mul*arr[lead]){
            mul *= 2;
            continue;
        }
        else{
            lead = i;
            s_ones.push_back({arr[i], 1LL << i}); 
            mul = 2;
        }
    }

    while(q--){
        ll cost = 0;
        ll query;
        cin >> query;

        ll ans = LLONG_MAX;
        int i = s_ones.size()-1;
        while(i >= 0){
            ll b_size = s_ones[i].second;
            ll cnt = query / b_size;
            cost += cnt * s_ones[i].first;
            query %= b_size;
            if(query > 0) ans = min(ans, cost + s_ones[i].first);
            i--;
        }
        ans = min(ans, cost);

        cout << ans << '\n';
    }

    return 0;
}