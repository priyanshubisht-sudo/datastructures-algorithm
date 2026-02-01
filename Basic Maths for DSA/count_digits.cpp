#include <bits/stdc++.h>
using namespace std;

// Brute-force approach
// int count(int n){
//     int cnt = 0;
//     while (n>0)
//     {
//         cnt = cnt + 1;
//         n = n/10;
//     }
//     return cnt;    
// }

// Optimal approach
int count(int n){
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

int main() {

}