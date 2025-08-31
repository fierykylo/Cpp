#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int key , n;
    cin >> n >> key;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    for(int x : arr)
    {
        if(x == key)
        {
            cout << "key at found at index : " << index << endl;
            return 0;
        }
        index++;
    }
    cout << "Not found !\n";


    
}