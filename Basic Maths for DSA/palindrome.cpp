#include <bits/stdc++.h>
using namespace std;

// leetcode approach (optimal)
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int rev = 0;
        int dup = x;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // check BEFORE multiply
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && digit > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && digit < -8)) return 0;

            rev = rev * 10 + digit;
        }
        if(rev == dup){
            return true;
            
        }
        else{
            return false;
        }
        
    }
    
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