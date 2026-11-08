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

struct IntersectionPt{
    int cow1, cow2, time1, time2;
    bool operator < (const IntersectionPt &other) const{
        if(time2 == other.time2){
            if(cow1 == other.cow1){
                if(cow2 == other.cow2){
                    return time1 < other.time1;
                }
                return cow2 < other.cow2;
            }
            return cow1 < other.cow1;
        }
        //main idea is sort by time2
        return time2 < other.time2;
    }

};

int main(){
    fastio();
    
    int n; cin >> n;
    vector<char> dir(n);
    vector<ll> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> dir[i] >> x[i] >> y[i];
    }
    vector<IntersectionPt> intersect;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(dir[i] != dir[j]){
                int a = i, b = j;
                if(dir[a] == 'N'){
                    swap(a, b);
                }
                if(x[a] < x[b] && y[a] > y[b]){
                    int timeA = x[b] - x[a], timeB = y[a] - y[b];
                    if(timeA > timeB){
                        intersect.push_back({b, a, timeB, timeA});
                    }
                    else if(timeA < timeB){
                        intersect.push_back({a, b, timeA, timeB});
                    }
                }
            }
        }
    }
    sort(intersect.begin(), intersect.end());
    const int INF = 2e9;
    vector<int> stopped(n, INF);
    for(IntersectionPt &ip : intersect){
        if(ip.time1 < stopped[ip.cow1] && ip.time2 < stopped[ip.cow2]){
            stopped[ip.cow2] = ip.time2;
        }
    }

    for(int i = 0; i < n; i++){
        if(stopped[i] == INF){
            cout << "Infinity" << '\n';
        }
        else{
            cout << stopped[i] << '\n';
        }
    }


    // vector<char> drr;
    // vector<pair<ll, ll>> arr;
    // vector<pll> col;
    // for(int i = 0; i < n; i++){
    //     char dir; ll xcor; ll ycor;
    //     cin >> dir >> xcor >> ycor;
    //     drr.push_back(dir);
    //     arr.push_back({xcor, ycor});
    // }
    // col = arr;
    // vector<ll> cnt(n, 0);
    // vector<int> dn(n, 0);
    // for(int i = 0; i < n; i++){
    //     if(drr[i] == 'E'){
    //         for(int j = 0; j < n; j++){
    //             if(i == j) continue;
    //             if(drr[j] == 'N'){
    //                 pair<ll, ll> final = {arr[j].first, arr[i].second};
    //                 if(final.second - arr[j].second < final.first - arr[i].first) dn[i] = 2;
    //             }
    //         }
    //     }
    //     if(drr[i] == 'N'){
    //         for(int j = 0; j < n; j++){
    //             if(i == j) continue;
    //             if(drr[j] == 'E'){
    //                 pair<ll, ll> final = {arr[j].first, arr[i].second};
    //                 if(final.second - arr[i].second < final.first - arr[j].first) dn[i] = 2;
    //             }
    //         }
    //     }
    // }
    // bool end = false;
    // while(end == false){
    //     for(int i = 0; i < n; i++){
    //         if(dn[i] == 0) break;
    //         if(dn[i] != 0 && i == n-1) end = true;
    //     }
    //     vector<pll> temp;
    //     for(int i = 0; i < n; i++){
    //         if(dn[i] == 1) continue;
    //         if(drr[i] == 'E'){
    //             pll target = {arr[i].first+1, arr[i].second};
    //             arr[i] = target;
    //             auto it = find(col.begin(), col.end(), target);
    //             if(it != col.end()){
    //                 dn[i] = 1;
    //             }
    //             else{
    //                 temp.push_back(target);
    //                 cnt[i]++;
    //             }
    //         }
    //         else if(drr[i] == 'N'){
    //             pll target = {arr[i].first, arr[i].second+1};
    //             arr[i] = target;
    //             auto it = find(col.begin(), col.end(), target);
    //             if(it != col.end()){
    //                 dn[i] = 1;
    //             }
    //             else{
    //                 temp.push_back(target);
    //                 cnt[i]++;
    //             }
    //         }
    //     }
    //     for(int i = 0; i < temp.size(); i++){
    //         col.push_back(temp[i]);
    //     }
    //     temp.clear();
    // }
    // for(int i = 0; i < n; i++){
    //     if(dn[i] == 1) cout << cnt[i] << '\n';
    //     else if(dn[i] == 2) cout << "Infinity" << '\n';
    // }

    return 0;
}