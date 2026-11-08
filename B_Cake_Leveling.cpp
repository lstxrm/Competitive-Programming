#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long prefix_sum = 0;
        long long max_height = 2e18; 

        for (int i = 1; i <= n; i++) {
            long long a;
            cin >> a;
            prefix_sum += a;
            long long current_possible = prefix_sum / i;
            max_height = min(max_height, current_possible);
            
            cout << max_height << (i == n ? "" : " ");
        }
        cout << "\n";
    }
    
    return 0;
}