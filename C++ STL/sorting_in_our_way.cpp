#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;

        if(p1.first > p2.first) return true;
        return false;
    }

int main() {
    pair <int, int> a[] = {{1,2}, {2,1}, {4,1}};

    sort(begin(a), end(a), comp);
    
    for(const auto & it : a){
        cout << it.first << " " << it.second << "\n";
    }

    // int num = 7;
    // int cnt = __builtin_popcount();
    
    // long long num = 1032948093289439;
    // int cnt = __builtin_popcountll();

    // string s = "123";

    // do{
    //     cout << s << endl;
    // } while(next_permutation(s.begin(), s.end()));
    // int maxi = *max_element(a, a+n);
    // this will be written as function.
    
}