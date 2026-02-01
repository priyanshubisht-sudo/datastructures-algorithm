#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int revNo = 0;
    int dup = n;

    while (n>0)
    {
        int ld = n%10;
        n = n/10;
        revNo = (revNo*10) + ld;
    }

    if (revNo == dup)
    {
        cout << "true";
    }
    else{
        cout << "false";
    }
    
    return 0;
}