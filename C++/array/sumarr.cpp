#include <bits/stdc++.h>
using namespace std;

// sum of elements in an array 

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for(int j = 0; j < n; j++)
    {
        sum += arr[j];
    }
    cout << sum << endl;
}