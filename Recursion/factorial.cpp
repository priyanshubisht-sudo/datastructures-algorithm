#include <bits/stdc++.h>
using namespace std;

// functional recursion
 int f(int n){
    if (n==0)
    {
        return 1;
    }
    return n * f(n-1);
}
int main(){
    int n = 3;
    cout << f(3);
    return 0;
}