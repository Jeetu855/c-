#include <iostream>
#include <stdlib.h>

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
    cout << "Shallow class constructor for : " << d << "\n";
}

Shallow::Shallow(const Shallow &source)
{
    data = new int;
    data = source.data;
    cout << "Shallow class shallow copy constructor for : " << *data << "\n";
}

Shallow::~Shallow()
{
    cout << "Shallow class destructor Freeing data for : " << *data << "\n";
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
    cout << "Deep class constructor for : " << d << "\n";
}

Deep::Deep(const Deep &source)
{
    data = new int;
    *data = (*source.data);
    cout << "Deep class Deep copy constructor for : " << *data << "\n";
}

Deep::~Deep()
{
    cout << "Deep class destructor Freeing data for : " << *data << "\n";
    delete data;
}

class Base
{
    int a;

public:
    Base(int val)
    {
        a = val;
    }
};

class Derived : public Base
{
    int b;

public:
    Derived(int val);
};

Derived::Derived(int val) : Base{val * 2}
{
    b = val;
}

int main()
{
    // Shallow s1 = 10;
    // Deep d1(10);

    // Shallow s2(s1);
    // Deep d2(d1);

    // Derived d1(10);
    return 0;
}