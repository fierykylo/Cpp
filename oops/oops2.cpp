#include <bits/stdc++.h>
using namespace std;

class rectangle 
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
};

// this code is written to show pointer to object and also how to create objects in heap vs stack

int main(void)
{
    rectangle r;
    rectangle *p;
    p = &r;
    p->length = 10;
    p->breadth = 20;
    cout << r.area();  // pointer to an object

    rectangle *q = new rectangle(); // creates object in heap
}
