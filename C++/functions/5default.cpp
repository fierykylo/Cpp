#include <bits/stdc++.h>
using namespace std;

int add(int x , int y = 0,int z = 0) // moves from rightt o left cant do x = 0 and rest not default 
{
    return x + y + z;
}
int main(void)
{
    int a , b , c;
    cin >> a >> b >> c;
    cout << "sum of nummbers is : " << add(a,b) << endl;
    cout << "sum of nummbers is : " << add(a,b,c) << endl;
    cout << "sum of nummbers is : " << add(a) << endl;
}

// works with even one variabl
