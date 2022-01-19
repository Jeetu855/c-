#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Base{
    public:
    int a{0};
    void display(){cout<<a<<", "<<b<<", "<<c<<endl;};//*member mthods has access to all

    protected:
    int b{0};

    private:
    int c{0};
};

class Derived:public Base{
    //a will be public
    //b will be protected
    // c will be inherited but cannot be accessed by class methods
    void access_base_members(){
        a=100;//OK
        b=200;//OK
        //c=300;//*error since not accesible
    };
};

int main(){
    cout<<"----------Base object--------------"<<endl;
    Base base;
    // base.a=100;//OK
    // base.b=200;//*error
    // base.c=300;//*error

    Derived d;
    // d.a=100;//OK
    // d.b=200;//*error
    // d.c=300;//*error
    // d.c=300;//*error

    return 0;
}