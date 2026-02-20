#include <bits/stdc++.h>
using namespace std;
 
// Parameterized Function
void f(int i, int sum){
    if (i < 1)
    {
        cout << sum;
        return;
    }
    f(i-1, sum+i);
}
int main() {

    f(4, 0);

    return 0;
}