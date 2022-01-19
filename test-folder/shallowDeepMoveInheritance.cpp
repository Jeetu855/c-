#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shallow
{
private:
    int *data;

public:
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};
Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
    cout << "Shallow Contructor for " << d << endl;
}

Shallow::Shallow(const Shallow &source)
{
    data = new int;
    data = source.data;
    cout << "Shalllow Copy constructor for " << *data << endl;
}
Shallow::~Shallow()
{
    cout << "Destructor freing data for " << *data << endl;
    delete data;
}

class Deep
{
private:
    int *data;

public:
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
    cout << "Deep Contructor for " << d << endl;
}

Deep::Deep(const Deep &source)
{
    data = new int;
    *data = *source.data;
    cout << "Deep Copy constructor for " << *data << endl;
}

Deep::~Deep()
{
    cout << "Destructor freing data for " << *data << endl;
    delete data;
}

class Move
{
private:
    int *data;

public:
    Move(int d);
    Move(const Move &source);
    Move(Move &&source);
    ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Contructor for " << d << endl;
}

Move::Move(const Move &source)
{
    data = new int;
    *data = (*source.data);
    cout << "Deep Copy constructor for " << *data << endl;
}

Move::Move(Move &&source)
{
    data = new int;
    data = source.data;
    source.data = nullptr;
    cout << "Move constructor for " << *data << endl;
}

Move::~Move()
{
    if (data != nullptr)
    {
        cout << "Destructor freing data for " << *data << endl;
    }
    else
    {
        cout << "Destructor freing data for nullptr" << endl;
    }

    delete data;
}

class Base
{
private:
    int a;

protected:
    int b;

public:
    void get_values();
    Base();
    Base(int a_val, int b_val);
    Base(const Base &source);
    ~Base();
};
Base::Base() : a{0}, b{0}
{
    cout << "Base class no args construc" << endl;
}
Base::Base(int a_val, int b_val) : a{a_val}, b{b_val}
{
    cout << "Base class 2 args construc" << endl;
}
void Base::get_values()
{
    cout << "a : " << a << " b : " << b << endl;
}

Base::Base(const Base &source) : a{source.a}, b{source.b}
{
    cout << "Base copy construc" << endl;
}
Base::~Base()
{
    cout << "Base class destructor" << endl;
}

class Derived : public Base
{
private:
    int c;

public:
    void get_val();
    Derived();
    Derived(int c_val);
    Derived(const Derived &source);
    ~Derived();
};

void Derived::get_val()
{
    cout << "c : " << c << endl;
}

Derived::Derived() : Base{}, c{0}
{
    cout << "Derived no args construc" << endl;
}

Derived::Derived(int c_val) : Base{c_val, c_val}, c{c_val}
{
    cout << "Derived 1 arg construc" << endl;
}

Derived::Derived(const Derived &source) : Base{source}, c{source.c}
{
    cout << "Derived copy construc" << endl;
}

Derived::~Derived()
{
    cout << "Derived destruc" << endl;
}

int main()
{
    // Shallow s1{10};
    // Shallow s2{s1};

    // Deep d1{10};
    // Deep d2{d1};

    vector<Move> vec;
    vec.push_back(Move(10));
    vec.push_back(Move(20));
    vec.push_back(Move(30));

    // Derived d1;
    // d1.get_val();
    // d1.get_values();
    // Derived d2(10);
    // d2.get_values();
    // d2.get_val();
    return 0;
}