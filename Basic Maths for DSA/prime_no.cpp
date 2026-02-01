#include<bits/stdc++.h>
using namespace std;

// Brute-force approach
// void checkPrime(int n){
//     int cnt = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n%i==0)
//         {
//             cnt++;
//         }
        
//     }
//     if(cnt == 2){
//         return true;
//     }
//     else
//     {
//         return false;
//     }
    
// }

// Optimal Approach
void checkPrime(int n){
    int cnt = 0;
    vector <int> ls;
    for (int i = 1; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            ls.push_back(i);
            cnt++;
            if (n/i != i)
            {
                ls.push_back(n/i);
                cnt++;
            }
    
        }
        
    }
    if (cnt == 2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    
}
int main() {

}