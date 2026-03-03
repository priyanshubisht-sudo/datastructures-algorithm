#include <bits/stdc++.h>
using namespace std;

// Brute-force approach
/* vector<int> unionArray(vector<int>& a, vector<int>& b) {
        int n1 = a.size();
        int n2 = b.size();
        set<int> st;
        for(int i = 0; i < n1; i++){
            st.insert(a[i]);
        }
        for(int i = 0; i < n2; i++){
            st.insert(b[i]);
        }   
        vector<int> temp;
        for(auto it: st){
            temp.push_back(it);
        }
        return temp;
    }
*/

// Optimal Approach
vector<int> unionArray(vector<int> &a, vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> temp;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(temp.size() == 0 || temp.back() != a[i]){
                temp.push_back(a[i]);
            }
            i++;
        }
        else{
            if(temp.size() == 0 || temp.back() != b[j]){
                temp.push_back(b[j]);
            }
            j++;
        }
    }
    while (j<n2)
    {
        if(temp.size() == 0 || temp.back() != b[j]){
            temp.push_back(b[j]);
        }
        j++;
    }
    while (i<n1)
    {
        if(temp.size() == 0 || temp.back() != a[i]){
            temp.push_back(a[i]);
        }
     i++;
    }

    return temp;
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
    
    return 0;
}