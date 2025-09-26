#include <bits/stdc++.h>
using namespace std;

// we are going to write a perfect class 
// it will contain all types of functions 
// also writing function defintion outside of a class is the preferred method
// this is because functions inside the class are inline functions therefore taking more space

class rectangle
{
    int len;
    int breadth;
    
    public:

    // constructors
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &r);

    // mutators
    void setlength(int l);
    void setbreadth(int b);

    //accesors
    int getlength();
    int getbreadth();

    // facilitators
    int area();
    int perimeter();

    //enquiry
    bool issquare();

    //destructor
    ~rectangle();
};

int main(void)
{
     // Default constructor
    rectangle r1;
    cout << "r1 length: " << r1.getlength() << " breadth: " << r1.getbreadth() << endl;
    cout << "Area: " << r1.area() << " Perimeter: " << r1.perimeter() << endl;
    cout << "Is square? " << (r1.issquare() ? "Yes" : "No") << endl << endl;

    // Parameterized constructor
    rectangle r2(5, 10);
    cout << "r2 length: " << r2.getlength() << " breadth: " << r2.getbreadth() << endl;
    cout << "Area: " << r2.area() << " Perimeter: " << r2.perimeter() << endl;
    cout << "Is square? " << (r2.issquare() ? "Yes" : "No") << endl << endl;

    // Copy constructor
    rectangle r3(r2);
    cout << "r3 (copy of r2) length: " << r3.getlength() << " breadth: " << r3.getbreadth() << endl;

    // Mutators
    r3.setlength(7);
    r3.setbreadth(7);
    cout << "After modifying r3 -> length: " << r3.getlength() << " breadth: " << r3.getbreadth() << endl;
    cout << "Is square? " << (r3.issquare() ? "Yes" : "No") << endl;

    return 0;
}
rectangle :: rectangle()
{
    len = 1;
    breadth = 1;
}
rectangle :: rectangle(int l, int b)
{
    len = l;
    breadth = b;
}
rectangle :: rectangle(rectangle &r)
{
    len = r.len;
    breadth = r.breadth;
}

// mutators
void rectangle :: setlength(int l)
{
    if(l < 0)
    {
        printf("please enter valid length : \n");
        return;
    }
    else
    {
        len = l;
    }
}
void rectangle :: setbreadth(int b)
{
    if(b < 0)
    {
        printf("please enter valid breadth : \n");
        return;
    }
    else
    {
        breadth = b;
    }
}

//accesors
int rectangle :: getlength()
{
    return len;
}
 int rectangle :: getbreadth()
 {
    return breadth;
 }

// facilitators
int rectangle :: area()
{
    return len * breadth;
}
int rectangle :: perimeter()
{
    return 2 * (breadth + len);
}



//enquiry
bool rectangle :: issquare()
{
    if (len == breadth)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//destructor
rectangle :: ~rectangle()
{
    cout << "Rectangle destroyed \n";
}