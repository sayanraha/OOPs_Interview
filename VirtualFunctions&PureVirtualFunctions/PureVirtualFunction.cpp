// A pure virtual function is a special type of virtual function that has no implementation in the base class. It is declared using the syntax virtual void functionName() = 0;. Classes containing pure virtual functions are called abstract classes, and they cannot be instantiated. Instead, they serve as base classes for derived classes that provide implementations for the pure virtual functions.

#include <iostream>

using namespace std;

// Abstract Base class
class Shape
{
public:
    // Pure virtual function
    virtual void draw() const = 0;
};

// Derived class
class Circle : public Shape
{
public:
    // Provide implementation for the pure virtual function
    void draw() const override
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{
    Circle circle;
    Shape *shapePtr = &circle; // Pointer to base class

    // Calls the draw() function of the derived class
    shapePtr->draw();

    return 0;
}

// In this example, Shape is an abstract base class containing a pure virtual function draw(). Classes derived from Shape, like Circle, must provide an implementation for the draw() function. We can still have a pointer of type Shape* pointing to a Circle object and call the draw() function through it, achieving polymorphism.