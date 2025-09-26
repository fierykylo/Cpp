#include <bits/stdc++.h>
using namespace std;

// by making the data members public there are chances of them being mishandled 
// instead of doing that we shall make accessor and mutator functions considered as good practice

class rectangle
{
    int length;
    int breadth;

    public:
    
    //mutators
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }

    //accessor
    int getlength()
    {
        return length;
    }

    int getbread()
    {
        return breadth;
    }
    // normal member function 
    int area()
    {
        return length * breadth;
    }
};

int main(void)
{
    rectangle r1;
    r1.setlength(10);
    r1.setbreadth(5);
    cout << r1.area() << "\n";
}