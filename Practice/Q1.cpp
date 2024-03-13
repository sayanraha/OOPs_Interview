//1. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.


#include <bits/stdc++.h>
using namespace std;

#define PI 3.142
class Circle{

    private :
    double radius;
    
    public:
    Circle(double radius){
        this->radius = radius;
    }
    double Area(){
        return PI * pow(radius,2);
    }
    double Circumference(){
        return 2 * PI * radius;
    }
};
int main(){
    double radius = 3.5;
    Circle obj(radius);
    double area = obj.Area();
    double circumference = obj.Circumference();
    cout<<"Area is -> "<<area<<endl;
    cout<<"Circumference is -> "<<circumference<<endl;
}