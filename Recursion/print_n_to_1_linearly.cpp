#include <bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i>n) return;
    cout << n << " ";
    f(i, n-1);
}

int main() {
    int n;
    cin >> n;
    f(1,n);
}