#include <bits/stdc++.h>
using namespace std;
//code to check if it is working hours or not
int main(void)
{
    int hour;
    cout << "Enter hour : ";
    cin >> hour;
    if(hour >= 9 && hour <= 18)
    {
        cout << "working hour \n";
    }
    else
    {
        cout << "not working hour \n";
    }
}