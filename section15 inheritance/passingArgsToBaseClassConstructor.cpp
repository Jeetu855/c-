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
    ~Base(){cout<<"Base class destructor"<<endl;};
};

class Derived:public Base{
    private:
    int doubled_value;
    public:
    Derived():Base{},doubled_value{0}{cout<<"Derived class constructor no args"<<endl;};//*no args base constructor called
    Derived(int x):Base{x},doubled_value{x*2}{cout<<"int Derived class constructor 1 arg"<<endl;};
    //*1 arg base constructor called
    ~Derived(){cout<<"Derived class destructor"<<endl;};
};

int main(){
   
    Base b1;
    Base b2{100};

    Derived d1;
    Derived d2{200};

    return 0;
}