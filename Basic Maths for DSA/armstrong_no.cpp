#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int dup = n;

    while(n>0){
        int lastDigit = n%10;
        n = n/10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
    }
    if(sum == dup) return true;
    return false;
    return 0;
}