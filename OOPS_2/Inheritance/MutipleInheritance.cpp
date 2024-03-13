//  - Multiple Inheritance: A class inherits properties from multiple base classes. It allows a derived class to combine features from multiple sources.

// Example of Multiple Inheritance

#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int height;

public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Human
{
public:
    string color;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class MutipleInherit : public Animal, public Human
{
};

int main()
{
    MutipleInherit obj;
    obj.bark();
    obj.speak();
}
