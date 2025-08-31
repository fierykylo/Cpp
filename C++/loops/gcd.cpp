#include <bits/stdc++.h>
using namespace std;

// program to find the highest factor of a numebr
int main(void)
{
    int a , b;
    cin >> a >> b;

    do
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    while(a != b);
    cout << "The gcd is = " << a << endl;
}