
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// * A base class pointer can point to a derived class object
// for dynamic poly we must have
//* 1)inheritance, 2)base class ptr or base class refrence, 3)virtual functions
//*eg:
// Account *p1=new Account();
// Account *p2=new Savings();
// Account *p3=new Checking();
// Account *p4=new Trust();
// p1->withdraw(100) //Account::withdraw
// p2->withdraw(100) //Savings::withdraw
// p3->withdraw(100) //Checking::withdraw
// p4->withdraw(100) //Trust::withdraw
// *other way
// Account *p1=new Account();
// Account *p2=new Savings();
// Account *p3=new Checking();
// Account *p4=new Trust();

// Account *array[]{p1,p2,p3,p4}; //* array of pointers to account object
//for(auto i=0;i>4;i++)
// array[i]->withdraw(100)//*calls correct method based of type of object

//** vector<Account *> accounts{p1,p2,p3,p4}//**
int main()
{

    return 0;
}

// int * arr[] //*array of pointers to intergers