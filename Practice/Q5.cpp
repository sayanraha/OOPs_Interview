// 5. Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
/*

 current balance-> balance + deposit-amt
  remaining_bln -> balance -  withdrawn
*/

#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    long long int accountNo;
    int balance;

    public:

    BankAccount(long long int accountNo,int balance){
        this->accountNo = accountNo;
        this->balance = balance;
    }

    void Deposit(int amount){
        balance += amount;
        cout<<"Amount Deposited Successfully and Your Current Balance is = "<<balance<<endl;
    }
    void Withdrawn(int amount){
        if(amount < balance){
            balance -= amount;
            cout<<"Amount Withdrawn Successfully and Your Current Balance is = "<<balance<<endl;
        }
        else{
            cout<<"Insufficient Balance !"<<endl;
        }
    }
};
int main(){
    BankAccount bk(234567891100115,10000);
    //bk.Deposit(5000);
    bk.Withdrawn(4000);
    bk.Withdrawn(14000);
}