#include <bits/stdc++.h>
using namespace std;

class base
{
    public:
    void display()
    {
        cout << "this is the base\n";
    }
};

class derived : public base
{
    public:
    void display()
    {
        cout << "this is public";
    }
};

int main(void)
{
    base b;
    b.display();
    derived d;
    d.display();
}