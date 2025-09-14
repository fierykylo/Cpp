#include <bits/stdc++.h>
using namespace std;

// when a function is generic we use template instead

template <class t>
t mmax(t x , t y)
{
    if(x > y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}

int main(void)
{
    int c = mmax(3,3);
    float d = mmax(10.2f,3.2f);
    cout << c << " " << d << endl;
}