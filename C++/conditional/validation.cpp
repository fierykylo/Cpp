#include <bits/stdc++.h>
using namespace std;

// code to see if we can divide two numbers and second number is not zero

int main(void)
{
    int a , b;
    cout << "Enter : \n";
    cin >> a >> b;
    if(b == 0)
    {
        cout << "Please enter a valid divisor \n";
    }
    else 
    {
        cout << a / b << "\n";
    }
}