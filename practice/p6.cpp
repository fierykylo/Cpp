#include <bits/stdc++.h>
using namespace std;

// Write a C++ program to demonstrate single inheritance using the following classes:
// •	Base class Person with data members name and age.
// •	Derived class Student with data members rollNo and marks.
// Use constructors to initialize both base and derived classes and display all the details.

class Person
{
    private:
    string name;
    int age;
    public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void pdisplay()
    {
        cout << "|Name - " << name;
        cout << "|Age -" << age;
    }
};

class Student: public Person
{
    private:
    int rollno;
    int marks;
    public:
    Student(string name, int age, int marks, int rollno) : Person(name, age)
    {
        this->marks = marks;
        this->rollno = rollno;
    }
    void display()
    {
        pdisplay();
        cout << "|Marks - " << marks; 
        cout << "|Roll no - " << rollno;
 
    }

};

int main(void)
{
    Student aarush("Aarush", 19, 29, 2430010050);
    aarush.display();
}