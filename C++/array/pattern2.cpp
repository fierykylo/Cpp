#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    /* my approach == better than abdul bari on a larger input
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int k = n; k > i; k--)
        {
            cout << "*";
        }
        cout << "\n";
    }
        **/

        // abdul bari approach
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i > j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    /*
    Here are the results for n = 2000 (a pretty big triangle):

🟢 Your approach: ~0.013 seconds

🔵 Abdul Bari’s approach: ~0.358 seconds

👉 That’s almost 27x faster for your version!*/

}