// virtual functions are a fundamental feature used for achieving runtime polymorphism. They allow a member function in a base class to be redefined in a derived class, enabling dynamic method binding.

#include <iostream>

using namespace std;

// Base class
class Shape
{
public:
    // Virtual function
    virtual void draw() const
    {
        cout << "Drawing a shape." << endl;
    }
};

// Derived class
class Circle : public Shape
{
public:
    // Override the draw() function
    void draw() const override
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{
    Circle circle;
    Shape *shapePtr = &circle; // Pointer to base class
    shapePtr->draw();

    return 0;
}

// In this example, the draw() function in the base class Shape is declared as virtual. When we call shapePtr->draw(), it invokes the draw() function of the derived class Circle, even though the pointer type is Shape.
