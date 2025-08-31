#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;
    cin >> num;
    int reverse = 0;
    while(num != 0)
    {
        reverse = (reverse * 10) + num % 10;
        num /= 10;
    }
    cout << reverse << endl;
}

/*
1234
rev  =  rev + (1234 % 10) == 4
1234 / 10 == 123

123
rev = 4 * 10 + 3 == 43
12
rev = 43 * 10 + 2*/