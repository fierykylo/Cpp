#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; 
    cin >> n;
    int key; 
    cin >> key;
    int arr[n];
    for(int i = 0;i < n; i++)
    {
        cin >> arr[i];
    }
     // sort(arr, arr + n);
    int low = 0 , high = n - 1 , mid = (low + high) / 2;
    do
    {
        mid = (low + high) / 2;
        if(low > high)
        {
            cout << "Not found \n";
            return 0;
        }
        if(arr[mid] == key)
        {
            cout << "found at index : " << mid << endl;
            return 0;
        }
        else if(arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    while(1);
}