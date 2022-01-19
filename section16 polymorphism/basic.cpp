// compile time polymorphism eg:1)overloaded functions, 2)overloaded operators
// compile time/early binding/static binding->b4 program executes//static //**static binding default in c++
// run time/late binding/dynamic binding

// compile time includes:1)operator overloading,2)function overloading
// run time includes:function overriding

// Static binding happens when all information needed to call a function is available at the
// compile-time. Dynamic binding happens when the compiler cannot determine all information
// needed for a function call at compile-time.

// * Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer)
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Base
{
public:
    void say_hello() const
    {
        cout << "Hello , I am base class object \n";
    }
};

class Derived : public Base
{
public:
    void say_hello() const
    {
        cout << "Hello, I am derived class object \n";
    }
};

void greetings(const Base &obj)
{
    cout << "Greetings \n";
    obj.say_hello(); //Base::say_hello()
}

int main()
{
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    greetings(b);
    greetings(d); // a derived is a base

    Base *ptr = new Derived(); //ptr holds address of base object and derived is base object
    ptr->say_hello();          //base class object, Base::say_hello()
    delete ptr;
    return 0;
}
// *is-a relationship in ineritance
// derived is-a base

// *A base class pointer can point to a derived class object, but we can only access base class
// *member or virtual functions using the base class pointer because object slicing happens when
// *a derived class object is assigned to a base class object. Additional attributes of a derived
// *class object are sliced off to form the base class object.

// A virtual function is a member function which is declared within a base class and is re-defined (overridden)
// by a derived class. When you refer to a derived class object using a pointer or a reference to the base class,
// you can call a virtual function for that object and execute the derived class’s version of the function.

// Virtual functions ensure that the correct function is called for an object, regardless of the type of reference
//  (or pointer) used for function call.
// They are mainly used to achieve Runtime polymorphism
// Functions are declared with a virtual keyword in base class.
// The resolving of function call is done at runtime.

// *Rules for Virtual Functions
// Virtual functions cannot be static.
// A virtual function can be a friend function of another class.
// Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
// The prototype of virtual functions should be the same in the base as well as derived class.
// They are always defined in the base class and overridden in a derived class. It is not mandatory for the
//  derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
// A class may have virtual destructor but it cannot have a virtual constructor