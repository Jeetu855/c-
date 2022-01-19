#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Base{
    private:
    int value;
    public:
    Base():value{0}{cout<<"Base class constructor no args"<<endl;};
    Base(int x):value{x}{cout<<"int Base class constructor 1 arg"<<endl;};
    Base(const Base &other):value{other.value}{cout<<"Base copy constructor"<<endl;};
    //prefer not making copy constructor so compiler uses its own default version of it
    Base &operator=(const Base &rhs){
        cout<<"Base operator="<<endl;
        if(this==&rhs)
            return *this;
        value=rhs.value;
        return *this;
    };
    ~Base(){cout<<"Base class destructor"<<endl;};
};

class Derived:public Base{
    private:
    int doubled_value;
    public:
    Derived():Base{},doubled_value{0}{cout<<"Derived class constructor no args"<<endl;};//*no args base constructor called
    Derived(int x):Base{x},doubled_value{x*2}{cout<<"int Derived class constructor 1 arg"<<endl;};
    //*1 arg base constructor called
    Derived(const Derived &other):Base(other),doubled_value{other.doubled_value}{
        cout<<"Derived copy constructor"<<endl;
    };
    Derived &operator=(const Derived &rhs){
        cout<<"Derived operaotr="<<endl;
        if(this==&rhs)
            return *this;
        Base::operator=(rhs);
        doubled_value=rhs.doubled_value;
        return *this;
    };
    ~Derived(){cout<<"Derived class destructor"<<endl;};
};

int main(){
   
    // Base b{100};
    // Base b1{b};//copy
    // b=b1;//assignemt

    Derived d{100};
    Derived d1{d};
    // d=d1;

    return 0;
}