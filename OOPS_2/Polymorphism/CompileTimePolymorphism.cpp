// #include <bits/stdc++.h>
// using namespace std;
// Function Overloading : When there are multiple functions in a class with the same name but different parameters, these functions are overloaded. The main advantage of function overloading is that it increases the program’s readability. Functions can be overloaded by using different numbers of arguments or by using different types of arguments.

/*
class A
{
    public:
    void sayHello(){
        cout<<"Hello Sayan Raha"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello("Ramesh Patel");
    return 0;
}
*/

// Operator Overloading : Operator overloading is a feature in C++ that allows you to redefine the behavior of operators when they are used with objects of your own classes. This feature enables you to make your classes more expressive and intuitive, mimicking the behavior of built-in types.

/*

    Points to remember while overloading an operator:

    -> It can be used only for user-defined operators(objects, structures) but cannot be used for in-built operators(int, char, float, etc.).

    -> Operators = and & are already overloaded in C++ to avoid overloading them.

    -> The precedence and associativity of operators remain intact.


*/

/**
 * The above C++ program defines a class Complex with overloaded arithmetic operators for addition,
 * subtraction, and multiplication, and demonstrates their usage in the main function.
 * 
 * @return The program defines a class `Complex` to represent complex numbers with real and imaginary
 * parts. The class overloads several operators such as `+`, `-`, `*`, `==`, and `<<` for addition,
 * subtraction, multiplication, equality comparison, and stream insertion respectively.
 */
#include <iostream>

using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
   
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the '+' operator
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading the '-' operator
    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overloading the '*' operator
    Complex operator*(const Complex &other) const
    {
        return Complex((real * other.real) - (imag * other.imag),
                       (real * other.imag) + (imag * other.real));
    }

    // Overloading the '==' operator
    bool operator==(const Complex &other) const
    {
        return (real == other.real) && (imag == other.imag);
    }

    // Overloading the '<<' operator (stream insertion)
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        return os << "(" << c.real << ", " << c.imag << ")";
    }
};

int main()
{
    Complex a(3.0, 4.0);
    Complex b(1.0, 2.0);

    Complex c = a + b; // Equivalent to c = a.operator+(b);
    Complex d = a - b; // Equivalent to d = a.operator-(b);
    Complex e = a * b; // Equivalent to e = a.operator*(b);

    cout << "a + b = " << c << endl;
    cout << "a - b = " << d << endl;
    cout << "a * b = " << e << endl;

    if (a == b)
    {
        cout << "a and b are equal." << endl;
    }
    else
    {
        cout << "a and b are not equal." << endl;
    }

    return 0;
}
