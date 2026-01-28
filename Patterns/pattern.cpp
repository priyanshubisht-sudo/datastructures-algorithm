#include<bits/stdc++.h>
using namespace std;

void print1(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void print2(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }   
}
void print3(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << j << " ";
        }
        
        cout << endl;
    }   
}
void print4(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << i << " ";
        }
        
        cout << endl;
    }   
}
void print5(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i+1 ; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }   
}
void print6(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1 ; j++)
        {
            cout << j << " ";
        }
        
        cout << endl;
    }   
}
void print7(int n) {
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}
void print8(int n) {
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2*(n-i-1)+1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}
void print9(int n) {
    
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if (i>n)
            {
                stars = 2*n-i;
            }
        for (int j = 1; j<=stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
void print10(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if((i+j)%2 == 0){
                cout << "1" << " ";
            }
            else{
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
    
}
void print11(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        
    }
    
}

int main() {

    // outer loop -> rows
    // inner loops -> columns

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print11(n);
  
    }
    
}