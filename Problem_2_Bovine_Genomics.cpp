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
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    
    int n, m; cin >> n >> m;
    vector<vector<char>> h_s(n, vector<char> (m));
    vector<vector<char>> n_s(n, vector<char> (m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> h_s[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> n_s[i][j];
        }
    }
    ll cnt = 0;
    for(int j = 0; j < m; j++){
        vector<char> arr;
        vector<char> brr;
        for(int i = 0; i < n; i++){
            auto it = find(arr.begin(), arr.end(), h_s[i][j]);
            auto jt = find(brr.begin(), brr.end(), n_s[i][j]);
            if(it == arr.end()){
                arr.push_back(h_s[i][j]);
            }
            if(jt == brr.end()){
                brr.push_back(n_s[i][j]);
            }
        }
        bool comp = false;
        ll kt = 0;
        while(kt < arr.size()){
            if(comp) break;
            ll lt = 0;
            while(lt < brr.size()){
                if(brr[lt] == arr[kt]){
                    comp = true;
                    break;
                }
                if((lt == brr.size()-1 && kt == arr.size()-1) && brr[lt] != arr[kt]){
                    cnt++;
                    break;
                }
                lt++;
            }
            kt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}