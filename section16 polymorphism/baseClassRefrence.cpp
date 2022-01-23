#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
public:
    virtual void withdraw(double amount) //**important virtual keyword
    {
        cout << "In Account::withdraw \n";
    }
    virtual ~Account()
    {
        cout << "In Account::destructor\n"; //*if no virtual destructor only this called everytime
    }
};

class Checking : public Account
{
public:
    virtual void withdraw(double amount) override //* virtual not necessary here but best practice
    {
        cout << "In Checking::withdraw \n";
    }
    virtual ~Checking() //* virtual not necessary here but best practice
    {
        cout << "In Checking::destructor\n";
    }
};

class Savings : public Account
{
public:
    virtual void withdraw(double amount) override
    {
        cout << "In Savings::withdraw \n";
    }
    virtual ~Savings()
    {
        cout << "In Savings::destructor\n";
    }
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount) override
    {
        cout << "In Trust::withdraw \n";
    }
    virtual ~Trust()
    {
        cout << "In Trust::destructor\n";
    }
};

void do_withdraw(Account &account, double amt)
{
    account.withdraw(amt);
};

int main()
{
    Account a;
    Account &ref = a;
    do_withdraw(ref, 500);
    Trust t;
    Account &ref_t = t;
    do_withdraw(ref_t, 1000);

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000);
    do_withdraw(a2, 1000);
    do_withdraw(a3, 1000);
    do_withdraw(a4, 1000);
    return 0;
}