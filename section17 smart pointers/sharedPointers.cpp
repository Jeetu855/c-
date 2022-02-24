#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>

using namespace std;

//*shared_ptr<T> points to object of type T
//*not unique,so ther can be many pointing to same object on heap
//*establishes shared ownership relation
//*can be assigned and copied
//*can be moved
//*! dosent support managing arrays by default
//*when use count is zero,the managed object on heap is destroyed

int main()
{
    shared_ptr<int> p1{new int{10}};
    cout << *p1 << "\n";
    *p1 = 200;
    cout << *p1 << "\n";

    shared_ptr<int> p2{p1}; //*we r making copy of shared ptr object
    // *!if it was an object instead of int, a copy of shared ptr object is created
    // *!and not a copy of object of that class

    cout << p1.use_count() << "\n";
    cout << p2.use_count() << "\n";
    p1.reset(); //*decrement the use_count//p1 is nulled out
    cout << p1.use_count() << "\n";
    cout << p2.use_count() << "\n";

    vector<shared_ptr<int>> vec;
    shared_ptr<int> ptr{new int{10}};
    vec.push_back(ptr);              // is ok as copying allowed
    cout << ptr.use_count() << "\n"; //*2 as 'ptr' original and 'ptr' in vector pointing

    return 0;
} //*automatically deleted when counter(number of shared pointers) is zero
  // *counter is number of pointers pointing to an object

//* Assume we have an Account class
//*shared_ptr<Account> ptr{new Account{"Larry"}}
//* ptr->deposit(1000)
//* ptr->withdraw(500)
//* automatically deleted