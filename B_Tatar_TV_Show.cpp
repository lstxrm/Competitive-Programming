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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> vis(n, 0);
        bool pos = true;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                vis[i] = 1;
                ll count = s[i] - '0';
                for(int j = i+k; j < n; j+=k){
                    vis[j] = k;
                    if(s[j] == '1'){
                        count++;
                    }
                }
                if(count%2 != 0){
                    pos = false;
                    cout << "NO" << '\n';
                    break;
                }
            }
        }
        if(pos){
            cout << "YES" << '\n';
        }
    }
    return 0;
}