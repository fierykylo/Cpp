#include <bits/stdc++.h>
using namespace std;

// practice of operator overloading

class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    friend Complex operator+(Complex c1, Complex c2);

    void display()
    {
        cout << real << " + " << imag << "i\n";
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main(void)
{
    Complex c1(10,2), c2(20,4);
    Complex c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
}
