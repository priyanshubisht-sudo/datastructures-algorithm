#include <bits/stdc++.h>
using namespace std;

// Brute-force Approach
/*
vector <int> intersectionArray(vector<int> &a, int n1, vector<int> &b, int n2){
    vector<int> ans;
    int vis[n2] = {0};
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && vis[j] == 0)
            {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(b[j] > a[i]){
                break;
            }
            
        }
        
    }
    
    return ans;
}
*/

// Optimal Approach
vector <int> intersectionArray(vector<int> &a, int n1, vector<int> &b, int n2){
    vector<int> ans;
    int i  = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main() {

    int n1, n2;
    
    cin >> n1;
    vector<int> a(n1);
    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }

    cin >> n2;
    vector<int> b(n2);
    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }

    vector<int> result = intersectionArray(a, n1, b, n2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}