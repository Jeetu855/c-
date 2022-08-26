#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>
#include<memory>

using namespace std;

class Shallow{
    int *data;
    public:
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d){
    data=new int;
    *data=d;
    cout<<"Shallow class  constructor for "<<d<<"\n";
}

Shallow::Shallow(const Shallow &source){
    data=new int;
    data=source.data;
    cout<<"Shallow class shallow copy constructor for "<<(*data)<<"\n";
}

Shallow::~Shallow(){
    cout<<"Shallow class destructor for "<<*data<<"\n";
    delete data;
}

class Deep{
    int *data;
    public:
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d){
    data=new int;
    *data=d;
    cout<<"Deep class  constructor for "<<d<<"\n";
}

Deep::Deep(const Deep &source){
    data=new int;
    *data=(*source.data);
    cout<<"Deep class Deep copy constructor for "<<(*data)<<"\n";
}

Deep::~Deep(){
    cout<<"Deep class destructor for "<<*data<<"\n";
    delete data;
}

class Move{
    int *data;
    public:
    Move(int d);
    Move(const Move &&source);
    Move(Move &&source);
    ~Move();
};

Move::Move(int d){
    data=new int;
    *data=d;
    cout<<"Move class constructor for "<<d<<"\n";
}

Move::Move(const Move &&source){
    data=new int;
    *data=(*source.data);
    cout<<"Move class deep copy constructor for "<<*data<<"\n";
}

Move::Move(Move &&source){
    data=new int;
    data=source.data;
    source.data=nullptr;
    cout<<"Move class move constructor for "<<*data<<"\n";
}

Move::~Move(){
    delete data;
    cout<<"Move class destructor\n";
}

int main(){
    // Shallow s1{10};
    // // cout<<s1.data<<"\n";
    // Shallow s2{s1};

    // Deep d1{10};
    // Deep d2{d1};
   
    vector<Move> vec;
    // Move m1{10};
    vec.push_back(Move{10});    
    return 0;
}