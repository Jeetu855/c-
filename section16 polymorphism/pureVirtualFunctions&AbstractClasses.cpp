#include <iostream>
#include <string>
#include <vector>

using namespace std;

// *abstract classes:1)we cannot directly instantiate objects of that class
// *2)these classes are used as base classes in inheritance heirarchy
// *3)often called abstract base class,they r very generic
// *4)serves as parent to many derived classes that may have objects
// *5)contains atleast 1 pure virtual function

// *concrete class:1)used to instantiate objects from //the ones we have been using
// *2)all their member functions are defined

// *pure virtual function used to make abstract classes
// *specified with virtual void function()=0;//pure virtual function
// *typically do not provide implementation(function definition)

// when we derive class from abstract class we must override pure virtual funcs
//if derived class does not override then it is also abstract

// *eg:abstract class Shape
// * we try to create object Shape s;//error
// * or ptr: Shape *ptr=new Shape() //error
// *now Circle is derived concrete class from abstract shape class
// *using base class ptr: Shape *ptr=new Circle();//this will work

class Shape
{ //abstract class
    // private:
    //atributes common to all shapes
public:
    virtual void draw() = 0;   //pure virtual function
    virtual void rotate() = 0; //pure virtual function
    virtual ~Shape(){};
};

class Open_Shape : public Shape
{ //abstract class
public:
    virtual ~Open_Shape(){};
};

class Closed_Shape : public Shape
{ //abstract class
public:
    virtual ~Closed_Shape(){};
};

class Line : public Open_Shape
{ //concrete class
public:
    virtual void draw() override
    {
        cout << "Drawing a line\n";
    };
    virtual void rotate() override
    {
        cout << "Rotating a line\n";
    }
    virtual ~Line(){};
};

class Circle : public Closed_Shape
{ //concrete class
public:
    virtual void draw() override
    {
        cout << "Drawing a circle\n";
    };
    virtual void rotate() override
    {
        cout << "Rotating a circle\n";
    };
    virtual ~Circle(){};
};

class Square : public Closed_Shape
{ //concrete class
public:
    virtual void draw() override
    {
        cout << "Drawing a square\n";
    };
    virtual void rotate() override
    {
        cout << "Rotating a square\n";
    };
    virtual ~Square(){};
};

void screen_refresh(const vector<Shape *> &shapes)
{
    cout << "Refreshing\n";
    for (const auto p : shapes)
        p->draw();
}

int main()
{
    // Shape s; //error
    // Shape *p=new Shape();//error

    // Circle c;
    // c.draw();

    // Shape *ptr = new Circle();
    // ptr->draw();
    // ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    vector<Shape *> shapes{s1, s2, s3};
    // for (const auto p : shapes)
    //     p->draw();
    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;

    return 0;
}