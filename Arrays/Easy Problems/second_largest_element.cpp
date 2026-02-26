#include <bits/stdc++.h>
using namespace std;

// Better Approach
// int findSecondLargest(int arr[], int n) {
//     if (n < 2) return -1; // not enough elements

//     int largest = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }

//     int secondLargest = -1;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     return secondLargest;
// }

// Optimal Approach
int findSecondLargest(int arr[], int n){
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int findSecondSmallest(int arr[], int n){
    int smallest = arr[0];
    int secondSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findSecondLargest(arr, n) << " ";
    cout << findSecondSmallest(arr, n);
    return 0;
}