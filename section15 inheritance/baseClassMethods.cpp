#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Account
{
protected:
    double balance;

public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};
Account::Account() : Account(0.0){}; //using delegating constructor
Account::Account(double amount) : balance{amount}
{
}

void Account::deposit(double amount)
{
    balance += amount;
}

void Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
    }
    else
    {
        cout << "Insufficient balance" << endl;
    }
}

class Savings_Account : public Account
{
protected:
    double int_rate;

public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    void deposit(double amount);
    //withdraw is inherited and we r changing deposit
};

Savings_Account::Savings_Account(double balance, double int_rate) : Account(balance), int_rate{int_rate} //account construc that expects 1 arg
{
    cout << "1 arg Constructor for savings \n";
};

Savings_Account::Savings_Account() : Savings_Account{0.0, 0.0}
{
    cout << "No arg savings constructor \n";
};

void Savings_Account::deposit(double amount)
{
    amount = amount + (amount * int_rate / 100);
    Account::deposit(amount);
}

int main()
{

    return 0;
}
// derived class can directly use base class methods
// *derived class can override or redifine base class methods
// static binding by default used by c++