#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    for(auto x : arr)
    {
        if(x > max)
        {
            max = x;
        }
    }
    cout << max << endl;
}