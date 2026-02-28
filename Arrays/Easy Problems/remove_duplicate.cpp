#include <bits/stdc++.h>

// 26. Remove Duplicates from Sorted Array
/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
*/

using namespace std;

// Brute-force Approach
// int removeDuplicate(vector <int> &arr, int n){
//     set <int> st;
//     for (int i = 0; i < n; i++)
//     {
//         st.insert(arr[i]);
//     }
//     int index = 0;
//     for(auto it: st){
//         arr[index] = it;
//         index++;
//     }
//     return index;
// }

// Optimal Approach
int removeDuplicate(vector <int> &arr, int n){
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1; 
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int newSize = removeDuplicate(arr, n);
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}