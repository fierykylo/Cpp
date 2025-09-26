#include <bits/stdc++.h>
using namespace std;

// this is written to demonstrate 
class rectangle 
{
    int length;
    int breadth;

    public:
    rectangle(int length , int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
};

int main(void)
{
    // meh just theory
    // what this pointer does is ki refers to the member of the current object
    /*
    The 'this' pointer in C++:
    --------------------------
    - It is an implicit pointer available in all non-static member functions.
    - 'this' points to the object for which the member function is called.
    - 'this->member' is used to access the current object's members.
    - '*this' gives the object itself.
*/
    printf("crazy shit !!\n");
}