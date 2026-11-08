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
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    
    vector<vector<char>> arr(3, vector<char>(3));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    set<char> ind;
    set<set<char>> team;

    auto checkLine = [&](char a, char b, char c){
        set<char> s = {a, b, c};
        if(s.size() == 1){
            ind.insert(*s.begin());
        }
        else if(s.size() == 2){
            team.insert(s);
        }
    };

    for(int i = 0; i < 3; i++){
        checkLine(arr[i][0], arr[i][1], arr[i][2]);
    }

    for(int j = 0; j < 3; j++){
        checkLine(arr[0][j], arr[1][j], arr[2][j]);
    }

    checkLine(arr[0][0], arr[1][1], arr[2][2]);
    checkLine(arr[2][0], arr[1][1], arr[0][2]);

    cout << ind.size() << '\n';
    cout << team.size() << '\n';

    return 0;
}