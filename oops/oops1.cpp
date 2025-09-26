#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length + breadth);
    }

};

int main(void)
{
    rectangle r1 , r2;
    r1.length = 10;
    r1.breadth = 5;
    cout << r1.area();
    cout << r2.perimeter();
}