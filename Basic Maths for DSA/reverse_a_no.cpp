#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int revNo = 0;

    while (n>0)
    {
        int ld = n%10;
        n = n/10;
        revNo = (revNo*10) + ld;
    }

    cout << revNo;
    
    return 0;
}