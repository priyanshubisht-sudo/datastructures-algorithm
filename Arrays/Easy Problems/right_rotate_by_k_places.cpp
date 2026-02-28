#include <bits/stdc++.h>
using namespace std;

// 189. Rotate Array
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

void rightRotate(vector<int> &arr, int k, int n){
    k = k%n;
    if(k==0) return;
    reverse(arr.begin(), arr.end()-k);
    reverse(arr.end()-k,arr.end());
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
    rightRotate(arr, k, n);
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}
