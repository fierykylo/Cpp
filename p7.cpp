#include <bits/stdc++.h>
using namespace std;

class Country
{
private:
    string countryName;

public:
    Country(string name)
    {
        countryName = name;
        cout << "Country constructor called\n";
    }

    void displayCountry()
    {
        cout << "Country: " << countryName << "\n";
    }
};

class State : public Country
{
private:
    string stateName;

public:
    State(string cname, string sname) : Country(cname)
    {
        stateName = sname;
        cout << "State constructor called\n";
    }

    void displayState()
    {
        cout << "State: " << stateName << "\n";
    }
};

class City : public State
{
private:
    string cityName;

public:
    City(string cname, string sname, string city)
        : State(cname, sname)
    {
        cityName = city;
        cout << "City constructor called\n";
    }

    void displayCity()
    {
        cout << "City: " << cityName << "\n";
    }

    void displayFullLocation()
    {
        cout << "\n--- Full Location ---\n";
        displayCountry();
        displayState();
        displayCity();
        cout << "---------------------\n";
    }
};

int main()
{
    City c("India", "Maharashtra", "Mumbai");

    c.displayFullLocation();

    return 0;
}
