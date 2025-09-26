#include <bits/stdc++.h>
using namespace std;

// example of a deep copy constructor 
class test
{
    int a;
    int *p;

    public:
    test(int x)
    {
        a = x;
        p = new int[a];
    }
    test(test &t)
    {
        a = t.a;
        // now if i do p = t.p , this wont create a new heap for the new object 
        // it will rather point to the one made for the object it is copied from 
        // so we will copy in detail 
        // this type of copying is called as deep copying and such a constructor is deep copy constructor
        p = new int[a];
    }
};
int main(void)
{
    // no code just wanted to show
}