#include <bits/stdc++.h>
using namespace std;

// 125. Valid Palindrome
/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

bool isPalindrome(string s){
    int st = 0;
    int end = s.length()-1;
    while (st < end)
    {
        if (!isalnum(s[st]))
        {
            st++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string s = "mad34";
    cout << isPalindrome(s);
    return 0;
}