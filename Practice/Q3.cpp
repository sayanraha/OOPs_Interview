// 3. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    void setName(string n)
    {
        name = n;
    }
    void setAge(int ag)
    {
        age = ag;
    }
    void setCountry(string c)
    {
        country = c;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country;
    }
};
int main(){
    Person S;
    S.setName("Sayan");
    S.setAge(22);
    S.setCountry("India");

    cout<<"Name is -> "<<S.getName()<<endl;
    cout<<"Age is -> "<<S.getAge()<<endl;
    cout<<"Country is -> "<<S.getCountry()<<endl;
}