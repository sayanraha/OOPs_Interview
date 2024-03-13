// Abstraction : It refers to the concept of hiding the complex implementation details of an object and only showing the necessary features or behaviors to the outside world.

// Real-life example: When you send an email to someone, you just click send, and you get the success message; what happens when you click send, how data is transmitted over the network to the recipient is hidden from you (because it is irrelevant to you).

// We can implement Abstraction in C++ using classes. The class helps us to group data members and member functions using available access specifiers. A Class can decide which data members will be visible to the outside world and not. Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on class members.

/*

        Advantages Of Abstraction :

    -> Only you can make changes to your data or function, and no one else can.

    -> It makes the application secure by not allowing anyone else to see the background details.

    -> Increases the reusability of the code.

    -> Avoids duplication of your code.

*/

#include <iostream>

using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function (abstract function)
    virtual void draw() const = 0;
};

// Concrete class Circle, inheriting from Shape
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of draw() function
    void draw() const override
    {
        cout << "Drawing a circle with radius " << radius << endl;
    }
};

// Concrete class Rectangle, inheriting from Shape
class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementation of draw() function
    void draw() const override
    {
        cout << "Drawing a rectangle with width " << width << " and height " << height << endl;
    }
};

int main()
{
    // Create objects of Circle and Rectangle
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Draw shapes without needing to know their internal details
    cout << "Drawing shapes:" << endl;
    circle.draw();
    rectangle.draw();

    return 0;
}
