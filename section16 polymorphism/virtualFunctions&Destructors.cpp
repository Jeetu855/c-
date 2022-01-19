#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Redifined functions are bound statically
// overridden functions are bound dynamically//*functions made dynamic by using virtual keyword
// virtual functions are overridden functions
// allow us to treat all objects generally as objects of base class

// *eg: virtual void withdraw(double amount)
// *virtual funcs dynamically bound only when we call them via base class ptr
// *otherwise they are statically bound

// all classes with virtual functions should have virtual destrucotrs
// once we provide virtual destructor in base class, all destructors in derived class are also virtual

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

int main()
{
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    // *if no virtual keyword all o/p will be "In Account::withdraw" i.e base class
    //*coz we r using static binding
    p1->withdraw(100);
    p2->withdraw(100);
    p3->withdraw(100);
    p4->withdraw(100);

    cout << "Cleanup -------------------------- \n";
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}

// ** there is no such thing as virtual constructors

// *redifined functions are statically binded and if we have a func eg:
// *withdraw(const int) in base class and in derived class we forget const keyword
// *then that function will become redifined and not overriden