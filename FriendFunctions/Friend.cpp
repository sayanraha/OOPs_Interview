/* Friend Function-

If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.



A class’s friend function is defined outside that class’s scope, but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.

A friend function in C++ is a function that is preceded by the keyword “friend.”


Syntax:

class class_name {    friend data_type function_name(argument); // syntax


Characteristics of friend function:

-> A friend function can be declared in the private or public section of the class.

-> It can be called a normal function without using the object.

-> A friend function is not in the scope of the class, of which it is a friend.

-> A friend function is not invoked using the class object as it is not in the class’s scope.

-> A friend function cannot access the private and protected data members of the class directly. It needs to make use of a class object and then access the members using the dot operator.

-> A friend function can be a global function or a member of another class.
*/

#include <iostream>

class MyClass
{
private:
    int data;

public:
    MyClass(int d) : data(d) {}

    // Declaration of friend function
    friend void printData(const MyClass &obj);
};

// Definition of friend function
void printData(const MyClass &obj)
{
    // Friend function has access to private members of MyClass
    std::cout << "Data from MyClass: " << obj.data << std::endl;
}

int main()
{
    MyClass obj(42);

    // Call friend function
    printData(obj);

    return 0;
}

/*
    In this example:

-> We have a class MyClass with a private member data.
-> The function printData is declared as a friend of MyClass inside the class definition using the friend keyword. This means printData can access private members of MyClass.
-> Inside printData, we can directly access the private member data of MyClass objects.
-> In main(), we create an object of MyClass and call the friend function printData, passing the object as an argument.
*/