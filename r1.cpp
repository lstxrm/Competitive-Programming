#include <bits/stdc++.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int main(){
    int x = 10;
    int* p = &x;
    int (*m) (int, int);
    m = &add;
    std::cout << (*m)(10, 3) << '\n';
    m = &sub;
    std::cout << m(10, 3) << '\n';
}