#include <bits/stdc++.h>
using namespace std;

// Optimal
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // check BEFORE multiply
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && digit > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && digit < -8)) return 0;

            rev = rev * 10 + digit;
        }

        return rev;
    }
        
int main() {

// Brute Force
    // int n;
    // cin >> n;
    // int revNo = 0;

    // while (n>0)
    // {
    //     int ld = n%10;
    //     n = n/10;
    //     revNo = (revNo*10) + ld;
    // }

    // cout << revNo;
    
    return 0;
}