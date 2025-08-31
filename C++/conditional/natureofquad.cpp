#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    float a , b , c , d;
    cin >> a >> b >> c;
    d = (b * b) - 4 * a * c;
    if(d == 0)
    {
        cout << "Equal and real\n";
    }
    else
    {
        if (d > 0)
        {
            cout << "Real and unequal \n";
        }
        if (d < 0)
        {
            cout << "Imaginary \n";
        }
    }


}