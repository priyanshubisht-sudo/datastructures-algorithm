#include <bits/stdc++.h>
using namespace std;

// Brute-force Approach
// void leftRotate(vector<int> &arr, int k, int n){
//     vector<int> temp;
//     for(int i = 0; i < k; i++){
//         temp.push_back(arr[i]);
//     }

//     for (int i = k; i < n; i++)
//     {
//         arr[i-k] = arr[i];
//     }
//     for (int i = n-k; i < n; i++)
//     {
//         arr[i] = temp[i-(n-k)];
//     }
    
// }

// Optimal Approach
void leftRotate(vector<int> &arr, int k, int n){
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main() {

    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    leftRotate(arr, k, n);
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}
