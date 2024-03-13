
// Inheritance Ambiguity -> use scope resolution operator

#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    void func1()
    {
        cout << "Inside Function 1" << endl;
    }
};

class B
{
public:
    void func1()
    {
        cout << "Inside Function 2" << endl;
    }
};

class C : public A, public B
{
};
int main()
{
    C obj1;
    obj1.A::func1();
    obj1.B::func1();
}
