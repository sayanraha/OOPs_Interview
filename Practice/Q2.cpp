//2. Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.


#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;

    public:
    Rectangle(int length,int width){
        this->length = length;
        this->width = width;
    }

    long Area(){
        return length * width;
    }
    long Perimeter(){
        return 2 * (length + width);
    }
};
int main(){
    int length = 10;
    int width = 6;
    Rectangle obj(length,width);
    cout<<"Area is = "<<obj.Area()<<endl;
    cout<<"Perimeter is = "<<obj.Perimeter()<<endl;
}
