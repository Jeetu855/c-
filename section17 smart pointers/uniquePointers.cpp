#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>

using namespace std;
// *unique_ptr<T>
// *Points to object of type T on the heap
// *There can only be 1 unique ptr pointing to an object on heap
// *Owns what it points to
// *!Cannot be assigned or copied
// *CAN be moved
// *When ptr is destroyed, what it points to is automatically destroyed

int main()
{
    unique_ptr<int> p1{new int{10}};
    cout << *p1 << "\n";
    *p1 = 200;
    cout << *p1 << "\n";
    // methods
    cout << p1.get() << "\n"; // some address
    p1.reset();               //*makes it nullptr,destroyes heap object
    cout << p1.get() << "\n"; // now is nullptr

    vector<unique_ptr<int>> vec; // vector of unique pointers of int type
    unique_ptr<int> ptr{new int{20}};

    // vec.push_back(ptr); //*! error since unique ptrs cannot be copied or assigned
    vec.push_back(move(ptr)); //*we can move unique ptrs
    //* now the vector owns the ptr and 'ptr' will be set to null

    // ***************************Better initialisation

    unique_ptr<int> ptr1 = make_unique<int>(100);
    auto ptr2 = make_unique<float>(10); //*auto keywork so compiler figures out the type

    return 0;
} //*automatically deleted

// *assume we have a class test
// *unique_ptr<Test> t1=make_unique(10);
// *unique_ptr<Test> t2;
// t2=t1 //*!error since unique ptrs cannot be assigned but can be moved so
// *t2=move(t1);//this is ok
// *now t1 becomes null as ownership passed to t2
// *if(!t1) cout<<"nullptr"
