#include <bits/stdc++.h>
using namespace std;

int power(int m , int n)
{
    int power = 1;
    while (n != 0)
    {
        power *= m;
        n--;
    }
}

int main(void)
{
    int a , b;
    cin >> a >> b;
    cout << "power of the number is : " << power(a , b) << endl;
}