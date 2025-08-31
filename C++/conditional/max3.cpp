#include <bits/stdc++.h>
using namespace std;

// code for find maximum of 3 numbers and using nested if 

int main(void)
{
    int a , b ,c;
    cin >> a >> b >> c;
    if(a > b)
    {
        if(a > c)
        {
            cout << a;
        }
        else
        cout << c;
    }
    else
    {
        if(b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
    
}