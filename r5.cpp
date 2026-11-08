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
        ll n;
        cin >> n;
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<int> arr;
        arr.push_back(b[0]);
        ll minm;
        for(int i = 1; i < n; i++){
            if(b[i-1] > b[i]){
                arr.push_back(b[i]); 
            }
            arr.push_back(b[i]);
        }
        cout << arr.size() << endl;
        for(int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}