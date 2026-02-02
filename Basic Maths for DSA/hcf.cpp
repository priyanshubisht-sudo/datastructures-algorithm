#include <bits/stdc++.h>
using namespace std;

//Brute-force approach
// int GCD(int n1,int n2) {
//         for(int i = min(n1, n2); i >= 1; i--){
//             if(n1%i == 0 && n2%i == 0){
//                 return i;
//                 break;
//             }
//         }
//     }

// Optimal approach
int GCD(int a, int b) {
    while (a>0 && b>0)
    {
        if (a>b)
        {
            a = a%b;
        }
        else
        {
            b=b%a;
        }
    }
    if (a==0)
    {
        return b;
    }
    else{
        return a;
    }
    
    
}

int main(){

    return 0;
}