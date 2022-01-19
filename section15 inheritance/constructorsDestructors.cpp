#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Base{
    private:
    int value;
    public:
    Base():value{0}{cout<<"Base class constructor no args"<<endl;};
    Base(int x):value{x}{cout<<"Base class constructor 1 arg"<<endl;};
    ~Base(){cout<<"Base class destructor"<<endl;};
};

class Derived:public Base{
    private:
    int doubled_value;
    public:
    Derived():doubled_value{0}{cout<<"Derived class constructor no args"<<endl;};
    Derived(int x):doubled_value{x*2}{cout<<"Derived class constructor 1 arg"<<endl;};
    ~Derived(){cout<<"Derived class destructor"<<endl;};
};

int main(){
    Base b1;
    Base b2{100};
    Derived d1;//*this first calls base class construcotr then drived class constructor
    // *destructors invoked in reverse order so derived part destroyed 
    Derived d2{100};

    return 0;
}