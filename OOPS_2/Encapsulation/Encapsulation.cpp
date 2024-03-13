/*
    Encapsulation(Information/Data Hiding) -> Wrapping up data members and functions into a class.


    Fully Encapsulated class -> all data-members are private, can be accessed within same class by default


    Advantage :

    -> Data Hiding using private access specifier
    -> If we want we can make class read only.
    -> Code re-usabilty
*/

// Implementation of Encapsulation

#include <iostream>

class Car
{
private:
    int speed; // private data member

public:
    void setSpeed(int s)
    { // public member function (setter)
        if (s >= 0)
            speed = s;
    }
    int getSpeed()
    { // public member function (getter)
        return speed;
    }
};

int main()
{
    Car myCar;
    myCar.setSpeed(100);
    std::cout << "Current speed: " << myCar.getSpeed() << " mph" << std::endl;
    return 0;
}

// In this example, the speed data member is encapsulated within the Car class. Its value can only be modified or accessed through the public member functions setSpeed() and getSpeed(). This ensures that the speed is always set and retrieved in a controlled manner.