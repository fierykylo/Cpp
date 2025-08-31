#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // initialisng two dimensional array

    int A[2][3] = {2,4,6,8,10,12};
    int B[2][3] = {{2,4,6},{8,10,12}};
    
    // code for adding two matrices 
    int c[2][3];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j] = A[i][j] + B[i][j];
        }
    }
}