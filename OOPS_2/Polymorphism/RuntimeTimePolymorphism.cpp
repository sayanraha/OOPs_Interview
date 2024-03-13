// Runtime polymorphism is also known as dynamic polymorphism. Method overriding is a way to implement runtime polymorphism.

/*
Method overriding:

Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement. In other words, whatever methods the parent class has by default are available in the child class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child class is allowed to redefine that method based on its requirement. This process is called method overriding.



Rules for method overriding:

-> The parent class method and the method of the child class must have the same name.

-> The parent class method and the method of the child class must have the same parameters.

-> It is possible through inheritance only.
*/

#include <bits/stdc++.h>
using namespace std;

class Parent
{
    public:
    void show(){
        cout<<"Inside parent class"<<endl;
    }
};

class subclass1 : public Parent
{
    public:
    void show(){
        cout<<"Inside subclass1"<<endl;
    }
};

class subclass2 : public Parent
{
    public:
    void show(){
        cout<<"Inside subclass2"<<endl;
    }
};

int main()
{
    subclass1 obj1;
    subclass2 obj2;
    obj1.show();
    obj2.show();
    return 0;
}
