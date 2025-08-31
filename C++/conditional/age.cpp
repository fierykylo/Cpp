#include <bits/stdc++.h>
using namespace std;

// code to check if someone is young or not 12-50 is young 

int main(void)
{
    int age; 
    cout << "Enter your age : ";
    cin >> age;

    // this basically displays the use of and logical operator 
    if(age >= 12 && age <= 50)
    {
        cout << "Young\n";
    }
    else
    {
        cout << "Not young \n";
    }
    // similar example but for usage of or logical operator
     if(age < 12 || age > 50)
    {
        cout << "Elgibile for offer\n";
    }
    else
    {
        cout << "Not Elgibile for offer\n";
    }

}

