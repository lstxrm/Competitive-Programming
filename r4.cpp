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
        ll a, b, c;
        cin >> a >> b >> c;
        ll count = 0;
        if(a == b){
            cout << 0 << '\n';
        }
        else if(gcd(a, c) == gcd(b, c)){
            cout << count+1 << '\n';
            }
        else if(gcd(a, c + 1) == gcd(b, c + 1)){
            cout << count+2 << '\n';
         }
        else{
            cout << 3 << '\n';
            }
        }
    return 0;
}