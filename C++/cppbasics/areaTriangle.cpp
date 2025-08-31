#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    float area , base, height;
    cout << "Enter height and base of the triangle : \n";
    cin >> height >> base;
    area = 0.5 * base * height;
    cout << fixed << setprecision(4);
    cout << "The area of the triangle is :  " << area<< endl;
}