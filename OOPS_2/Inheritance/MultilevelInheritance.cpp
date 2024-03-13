// - Multi-level Inheritance: One class is derived from another derived class, creating a chain of inheritance. Each class inherits properties from its immediate parent.

// Example of multi-level inheritance

#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int height;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
};
class GermanShefard : public Dog
{
};

int main()
{
    GermanShefard dg;
    cout << dg.age << endl;
    cout << dg.height << endl;
    dg.speak();
    return 0;
}
