// - Single Level Inheritance: One class is derived from only one base class, forming a simple parent-child relationship.

// Example of Single Level inheritance

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
int main()
{
    Dog dg;
    cout << dg.age << endl;
    cout << dg.height << endl;
    dg.speak();
    return 0;
}
