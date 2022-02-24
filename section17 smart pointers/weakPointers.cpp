#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>

using namespace std;

//*weak_ptr<T> points to object of type T
//*does not participate in owning relationship
//*always created from shared ptr
//*!Does not increment or decremnet use_count
//*used to prevent strong reference cycles which could prevent objects from being deleted

class B; // forward declaration//*like function prototype

class A
{
    shared_ptr<B> b_ptr;

public:
    A() { cout << "A constructor\n"; };
    ~A() { cout << "A destructor\n"; };
    void set_B(shared_ptr<B> &b)
    {
        b_ptr = b;
    };
};

class B
{
    weak_ptr<A> a_ptr; //*make weak to break strong circular refrence

public:
    B() { cout << "B constructor\n"; };
    ~B() { cout << "B destructor\n"; };
    void set_A(shared_ptr<A> &a)
    {
        a_ptr = a;
    };
};

int main()
{
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();

    a->set_B(b);
    b->set_A(a);
    //*!dosent call destructor coz A keeps B alive and vice versa
    // *!because class A has ptr pointing to B and so use count dosent become 0
    // *!same for class B
    // *!causes memory leak
    return 0;
}