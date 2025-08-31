#include <iostream>
using namespace std;

int main(void)
{
    // linear data strcuture of homogenous data type and contiguous memory which can be indexed
    int A[5] = {2,4,6,8,10}; // initiliasation
    // outputting the elements
    for(int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    int B[] = {2,3,4,5}; // automatically understands the size
    int c[4] = {2,3}; // all the other elements are either 0 or garbage value
    // taking input
    int d[5];
    for(int j = 0; j < 5; j++)
    {
        cin >> d[j];
    }
}