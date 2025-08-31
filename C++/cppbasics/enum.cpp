#include <bits/stdc++.h>
using namespace std;

enum day{mon,tue,wed,thur,fri,sat,sun};
enum dept{cs = 1, it , aiml , ds};
int main(void)
{
    day today = tue;
    dept mine = it;
    cout << mine << " " << today;
}

