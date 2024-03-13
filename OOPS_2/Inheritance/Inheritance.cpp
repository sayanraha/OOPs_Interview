/*
    Inheritance :
     Inheritance in C++ is a mechanism where a class (called a derived class or subclass) inherits properties and behaviors (data members and member functions) from another class (called a base class or superclass). This allows for code reuse and the creation of hierarchical relationships between classes.


     // Syntax: In C++, the syntax for inheritance is:

    class BaseClass
    {
    // Base class members
    };

    class DerivedClass : access - specifier BaseClass
    {
    // Derived class members
    };


    Modes of Inheritance :-


   -> Public mode: If we derive a subclass from a public base class. Then, the base class’s public members will become public in the derived class, and protected class members will become protected in the derived class.


   -> Protected mode: If we derive a subclass from a Protected base class. Then both public members and protected  members of the base class will become protected in the derived class.


   -> Private mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

*/

#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return age;
    }
    void setWeight(int w)
    {
        weight = w;
    }
};
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Man sleeping";
    }
};
int main()
{
    Male obj;
    cout << obj.age << endl;
    cout << obj.color << endl;
    cout << obj.height << endl;
    cout << obj.weight << endl;
    return 0;
}

// NOTE:

/*

        Super /Base/ Parent class              Inherited in                   Result

            public                              public                        public
            public                              protected                     protected
            public                              private                       private


            protected                           public                        protected
            protected                           protected                     protected
            protected                           private                       private


            private                              public                       Not Accessible
            private                              protected                    Not Accessible
            private                              private                      Not Accessible

*/
