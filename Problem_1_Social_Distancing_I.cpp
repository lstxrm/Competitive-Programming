#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("socdist1.in", "r", stdin);
    freopen("socdist1.out", "w", stdout);
    int n; string s;
    cin >> n >> s;

    vector<int> ones;
    for(int i = 0; i < n; i++) if(s[i] == '1') ones.push_back(i);

    if(ones.empty()){ cout << n - 1 << '\n'; return 0; }

    int minExist = INT_MAX;   // closest pair of existing cows
    vector<int> singles;      // best D if ONE new cow goes in this gap
    int bestDouble = 0;       // best D if BOTH new cows go in the same gap

    int lead = ones[0];
    if(lead > 0){ singles.push_back(lead); bestDouble = max(bestDouble, lead / 2); }

    int trail = n - 1 - ones.back();
    if(trail > 0){ singles.push_back(trail); bestDouble = max(bestDouble, trail / 2); }

    for(size_t i = 1; i < ones.size(); i++){
        int g = ones[i] - ones[i-1];          // distance between the two 1s
        minExist = min(minExist, g);
        if(g >= 2){
            singles.push_back(g / 2);         // one cow in the middle
            bestDouble = max(bestDouble, g / 3); // two cows splitting into thirds
        }
    }

    sort(singles.rbegin(), singles.rend());
    int best = bestDouble;
    if(singles.size() >= 2) best = max(best, singles[1]); // different gaps: limited by the weaker one

    cout << min(best, minExist) << '\n';
}