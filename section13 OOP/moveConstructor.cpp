#include <iostream>
#include <string>
#include <vector>
using namespace std;

// The copy constructors in C++ work with the l-value references and copy
// semantics(copy semantics means copying the actual data of the object to
// another object rather than making another object to point the already
//existing object in the heap). While move constructors work on the r-value
//references and move semantics(move semantics involves pointing to the already existing object in the memory).

// On declaring the new object and assigning it with the r-value, firstly a temporary object
//  is created, and then that temporary object is used to assign the values to the object.
//  Due to this the copy constructor is called several times and increases the overhead
//  and decreases the computational power of the code. To avoid this overhead and make the
//   code more efficient we use move constructors.

// Move constructor moves the resources in the heap, i.e., unlike copy constructors which
//  copy the data of the existing object and assigning it to the new object move constructor
//   just makes the pointer of the declared object to point to the data of temporary object
//    and nulls out the pointer of the temporary objects. Thus, move constructor prevents
//     unnecessarily copying data in the memory.

class Move
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; };
    int get_data() { return *data; };
    // construc
    Move(int d);
    // copy contruc
    Move(const Move &source);
    // move construc
    Move(Move &&source) noexcept;
    // destruc
    ~Move();
};
Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}
// copy
Move::Move(const Move &source)
{
    data = new int;
    *data = (*source.data);
    cout << "Contructor / deep copy for: " << *data << endl;
}

// move
Move::Move(Move &&source) noexcept : data{source.data} /*like in shallow copy*/
{
    source.data = nullptr;
    cout << "Move constructor " << *data << endl;
}

// dstruc
Move::~Move()
{
    if (data != nullptr)
    {
        cout << "Destructor freeing data for " << *data << endl;
    }
    else
    {
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main()
{
    vector<Move> vec;
    vec.push_back(Move(10));
    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    return 0;
}