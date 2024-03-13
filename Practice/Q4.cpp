// 4. Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include<bits/stdc++.h>
using namespace std;

class Car{
    private:
    string company;
    string model;
    int year;

    public:
    void setCompany(string company){
        this->company = company;
    }
    void setModel(string model){
        this->model = model;
    }
    void setYear(int year){
        this->year = year;
    }
    string getCompany(){
        return company;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }   
};
int main(){
    Car obj;
    obj.setCompany("Lamborghini");
    obj.setModel("Lambhorgini LX 97110");
    obj.setYear(2020);
    cout<<"Company : "<<obj.getCompany()<<endl;
    cout<<"Model : "<<obj.getModel()<<endl;
    cout<<"Year : "<<obj.getYear()<<endl;
}