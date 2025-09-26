#include <bits/stdc++.h>
using namespace std;

// it feels inherently wrong to get something with garbage value to solve that we have constructors
// three types of user defined 
// default // non para
// parameterised
// copy 
// the function of a class are called its facilitators 

class rectangle
{
    int length;
    int breadth;

    public:

    rectangle()
    {
        length = 0;
        breadth = 0;
    }
    rectangle(int l, int b) // if we set l = 0 and b = 0 makes the default constructor obsolete
    {
        setlength(l); // using set length cause handles the edge cases
        setbreadth(b);
    }
    rectangle(rectangle &r) // copy constructor
    {
        length = r.length;
        breadth = r.breadth;
    }
    
    //mutators
    void setlength(int l)
    {
        if( l >= 0) // check 
        {
            length = l;
        }
        else
        {
            printf("no negative values allowed\n");
            return;   
        }
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
    rectangle r1; // default 
    rectangle r2(10,20); // para
    rectangle r3(r2); // copy
    cout << r1.area() << " " << r2.area() << " " << r3.area() << endl;
}