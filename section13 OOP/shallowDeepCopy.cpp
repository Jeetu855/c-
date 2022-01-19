#include<iostream>
#include<string>
#include<vector>

using namespace std;
//default behaviour is shallow copy

class Shallow{
    private:
    int *data;

    public:
    void set_data_value(int d){*data=d;};
    int get_data_value(){return *data;};
    // constructor
    Shallow(int d);
    // copy constructor
    Shallow(const Shallow &source);
    // destructor
    ~Shallow();

};

//* when we have a pointer on the heap as a class member, we delete it in destructor so 
// * shallow copy(default method) dosent work
Shallow::Shallow(int d){
    data=new int;
    *data=d;
}

Shallow::Shallow(const Shallow &source):data{source.data}{
    cout<<"Copy constructor-shallow copy"<<endl;
};

Shallow::~Shallow(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
};

void display_shallow(Shallow s){
    cout<<s.get_data_value()<<endl;
}

class Deep{
    private:
    int *data;

    public:
    void set_data_value(int d){*data=d;};
    int get_data_value(){return *data;};

    //construc
    Deep(int d);
    //copy construc
    Deep(const Deep &source);
    //destruc
    ~Deep();
};

Deep::Deep(int d){
    data=new int;
    *data=d;
}

Deep::Deep(const Deep &source):Deep{*source.data}{
    cout<<"Copy contructor-deep copy"<<endl;
};

Deep::~Deep(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}

void display_deep(Deep s){
    cout<<s.get_data_value()<<endl;
}


//*when a copy is made, its points to same location as original
//*so when destructor for original called, its memory is removed and the copy points to invalid memory

int main(){
    Shallow obj1{100};
    display_shallow(obj1); //will contain data value as 100 but will also point to same location
    //but in deep copy it has same value but points to different location
    Shallow obj2{obj1};
    obj2.set_data_value(1000);

    Deep obj3{100};
    display_deep(obj3);

    Deep obj4{obj3};
    obj3.set_data_value(1000);

    return 0;
}

// * this
//this is a keyword and refrences to current object
//this contains address(pointer) to the object
//can only be used in scope of class
// can be derefrenced (*this)

//* using const with objects 
// const Player villsin{"Villain",100,14};
//the above data cannont be changed