#include <bits/stdc++.h>
using namespace std;

bool check(int colsA, int rowsB);

int main(void)
{
    int row1 , col1 , row2 , col2;
    cin >> row1 >> col1 >> row2 >> col2;

    if(!check(col1, row2))
    {
        cout << "Multiplication not possible !!\n";
        return 1;
    }

    int A[row1][col1];
    int B[row2][col2];

    // Input A
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            cin >> A[i][j];
        }
    }

    // Input B
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            cin >> B[i][j];
        }
    }

    int C[row1][col2];

    // Multiply
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            C[i][j] = 0; // important: initialize
            for(int k = 0; k < col1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            cout << C[i][j] << "  ";
        }
        cout << "\n";
    }
}

bool check(int colsA, int rowsB)
{
    return (colsA == rowsB);
}
