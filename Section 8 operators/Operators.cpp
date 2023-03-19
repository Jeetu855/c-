// Expression made of operators and operands that yield a result
// Statement :complete line of code that performs some action(like loops and conditionals ,variable declaration)

#include <iostream>
using namespace std;
int main(){
    // int num1 {20}; //initialisation to 20

    // num1 =100; //assigning, value on rhs sent to  location of lhs, associate right to left

    //*  % modulo operator only works with integers, give remainder of division
    // + - / * are overloaded which mean they can be used with int floats doubles

    // int num2 {200};
    // cout<<"The result of "<<num1<<" divided by "<<num2<<" is "<<num1/num2<<endl; // both are ints and ans is 0.5 but 5 is removed so we get 0

    // int num3 {10};
    // int num4 {3};

    // cout<<"The result of "<<num3<<" modulo "<<num4<<" is "<<num3%num4<<endl;

    // Increment and decrement operator ++ increases by 1 ,-- decreses by 1
    // ++num prefix , num++ postfix

    // int counter {10};
    // int result {0};

    // cout<<counter<<endl; //10
    // counter =counter+1;
    // cout<<counter<<endl;//11
    // counter++;
    // cout<<counter<<endl;//12 
    // ++counter;
    // cout<<counter<<endl;//13 both prefix and postfix if just alone increment by 1

    // Preincrement
    int counter {10};
    int result {0};
    result=++counter; // same as counter=counter+1 then result=counter so incremented b4 
    cout<<"Counter "<<counter<<endl;
    cout<<"Result "<<result<<endl;

    // Postincrement
    result=counter++; // same as result=counter then counter++
    cout<<"Counter "<<counter<<endl;
    cout<<"Result "<<result<<endl;



    return 0;
}
