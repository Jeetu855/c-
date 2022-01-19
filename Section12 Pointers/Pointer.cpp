#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    // int *a is same as int* a,* can be at both place(* called indirection operator)
    //always intitalize to null eg: int* a{nullptr};

    // int value{10};
    // cout<<"Value is: "<<value<<endl;
    // cout<<"Size is: "<<sizeof(value)<<" bytes"<<endl;
    // cout<<"Address is: "<<&value<<endl; //o/p is hexa-decimal number representing location

    // int *p;
    // cout<<"Value of p is "<<p<<endl; //garbage value
    // cout<<"Address of p is "<<&p<<endl;
    // cout<<"Size of p is "<<sizeof(p)<<endl;

    // p=nullptr;
    // cout<<"Value of p is "<<p<<endl;

    // int *p1{nullptr};
    // double *p2{nullptr};
    // unsigned long long *p3{nullptr};
    // string *p4{nullptr};
    // vector<string> *p5{nullptr};
    // cout<<sizeof(p1)<<endl;
    // cout<<sizeof(p2)<<endl;
    // cout<<sizeof(p3)<<endl;// all take 4 bytes of space
    // cout<<sizeof(p4)<<endl;
    // cout<<sizeof(p5)<<endl;
    // ********all pointers take 4 bytes of space*********************

    // int score{10};
    // double temp{98.6};

    // int *score_ptr{nullptr};
    // score_ptr= &score;
    // score_ptr= &temp;// this is error coz we said to hold location of int but temp is double
    // ptrs are variables so their values can change

    //* also called dereferencing operator, used to declare and dereference a ptr

  /*   int score{100};
    int *score_ptr{&score};

    cout<<score_ptr<<endl;
    cout<<*score_ptr<<endl;
    
    *score_ptr=200;
    cout<<*score_ptr<<endl; */
    return 0;
}