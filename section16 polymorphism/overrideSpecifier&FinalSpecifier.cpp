#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Base
{
public:
    virtual void say_hello() const
    {
        cout << "Hello , I am base class object \n";
    }
    virtual ~Base()
    {
        cout << "Base destructor\n";
    };
};

class Derived : public Base
{
public:
    virtual void say_hello() const override //*if i forgot const keyword here so this method is redifined not overidden
    // *this becomes redifined function and is now statically bounded
    // *so p2->withdraw calls base class method
    // *to fix use 'override and it will show error
    // *so adding override shows error while not writng it will give bug
    {
        cout << "Hello, I am derived class object \n";
    }
    virtual ~Derived()
    {
        cout << "Derived destructor\n";
    };
};

int main()
{
    Base *p1 = new Base();
    Base *p2 = new Derived();
    p1->say_hello();
    p2->say_hello();
    return 0;
}
// *final specifier can be used in 2 contexts
// *1)prevents class from being derived from i.e that class will not have sub classes/derived classes
// *eg: class My_class final{};My_class cannot be derived from
// * class Derived final:public Base{}//Derived cannot be derived from
// *2)when used in methods it prevents virtual methods from being overridden

// *Eg for 2)
/*  class A
{
public:
    virtual void do_something()
    {
        cout << "A\n";
    };
}

class B : public A
{
public:
    virtual void do_something() final//*prevents overding
    {
        cout << "B\n";
    };
}

class C : public B
{
    virtual void do_something() //*error cannot override
    {
        cout << "A\n";
    };
} */