#include <bits/stdc++.h>
using namespace std;

// Brute-force Approach
/*
int missingArray(vector<int> &arr, int n){
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
}
*/

// Better Approach
/*
int missingArray(vector<int> &arr, int n){
    int hash[n+1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if(hash[i] == 0){
            return i;
        }
    }

    return -1;
}
*/

int missingArray(vector<int> &arr, int n){
    int xor1= 0,xor2 = 0;
    int m = n-1;
    for (int i = 0; i < m; i++)
    {
        xor1 = xor1 ^ (i+1);
        xor2 = xor2 ^ arr[i];
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;

}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << missingArray(arr, n);

    return 0;
}