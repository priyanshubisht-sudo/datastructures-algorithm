#include <bits/stdc++.h>
using namespace std;

// 283. Move Zeroes
/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
*/

void moveZero2End(vector<int> &arr, int n){
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        arr[i] = 0;
    }
    
}


int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveZero2End(arr, n);
    for(int x: arr){
        cout << x << " ";
    }

    return 0;
}