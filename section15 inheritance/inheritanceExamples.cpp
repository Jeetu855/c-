#include<iostream>
#include<string>
#include<vector>
// *eg class Account{};(superclass), class Savings_Account:public Account(child class)

using namespace std;

class Account{
    public:
    double balance;
    string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();

};
Account::Account():balance{0.0},name{"An Account"}{};
Account::~Account(){};

void Account::deposit(double amount){
    cout<<"Account deposit called with "<<amount<<endl;
}

void Account::withdraw(double amount){
    cout<<"Account withdraw called with "<<amount<<endl;
}

class Savings_Account:public Account{
    public:
    double int_rate;
    Savings_Account();
    ~Savings_Account();
    void deposit(double amount);
    void withdraw(double amount);

};
Savings_Account::Savings_Account():int_rate{3.0}{};
Savings_Account::~Savings_Account(){};

void Savings_Account::deposit(double amount){
    cout<<"Savings account deposit called "<<amount<<endl;
};

void Savings_Account::withdraw(double amount){
    cout<<"Savings account withdraw called "<<amount<<endl;
};

int main(){

    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    cout<<"------------------------------------------"<<endl;

    Account *p_acc{nullptr};
    p_acc=new Account;
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    
    // Using savings account
    cout<<"-------------Savings Account---------------------"<<endl;

    Savings_Account sav_acc{};//* this has balance=0 and name="An account" inheritied from account
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);

    cout<<"------------------------------------------"<<endl;
    Savings_Account *p_sav_acc{nullptr};
    p_sav_acc=new Savings_Account;
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    cout<<"------------------------------------------"<<endl;
    return 0;
}