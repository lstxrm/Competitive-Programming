#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(4);
    s.insert(2);
    s.insert(1);
    cout << s.count(2) << endl;
}