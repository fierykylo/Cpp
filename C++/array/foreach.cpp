#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int A[] = {2,4,6,8,10};
    // reads as for each element x in A basiclly iteraates through everything 
    for(int x : A)
    {
        cout << x << endl;
    }
    // doesnt work on pointers
    // also valid 
    /*
    for(auto x : )
    also valid when u want to actually change the variables value and not make a copy
    for(int &x : ) this is also known as referecne 
    */
}