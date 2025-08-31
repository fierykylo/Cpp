#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    while(n != 0)
    {
        cout << n << "\n";
        n--;
    }
    int a;
    cin >> a;
    while(a--)
    {
        cout << a << " ";
    }
    // can also do using this
    int b = 10;
    do
    {
        cout << b << " ";
        b--;
    } while (b == 0);
    cout << endl;

    
}