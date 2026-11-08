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
using vll = vector<long long>;
using pll = pair<long long,long long>;
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
    // freopen("traffic.in", "r", stdin);
    // freopen("traffic.out", "w", stdout);
    
    int n; cin >> n;
    map<ll, pair<string, string>> m;
    for(int i = 0; i < n; i++){
        ll num;
        string name;
        string rate;
        cin >> num >> name >> rate;
        m[num] = {name, rate};
    }
    ll lead1 = 0;
    ll lead2 = 0;
    string lname = "none";
    string pname = "none";
    ll cnt = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        char sign = it->second.second[0];
        it->second.second.erase(0, 1);
        if(sign == '+' && (stoi(it->second.second) - lead1) >= 0 && (lname != it->second.first)){
            if(stoi(it->second.second) > lead1){
                cnt++;
                lead2 = lead1;
                lead1 = stoi(it->second.second);
                pname = lname;
                lname = it->second.first;
            }
        }
        else if(it->second.second[0] == '-' && lname != it->second.first && (lead1 - stoi(it->second.second) <= 0) && pname != lname){
            cnt++;
            lead2 = lead1;
            lead1 = stoi(it->second.second);
            swap(lname, pname);
        }
    }
    cout << cnt << '\n';

    return 0;
}