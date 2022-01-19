#include<iostream>

using namespace std;

int main(){
    // c++ operations occur on operands with same data type,if the data type doesnt match
    // c++ converts one of them. If conversion not possible a compiler error will occur

    // lower types can be converted to higher but higher types cannot be converted to lower types
    // eg int can be converted to long double etc
    // Promotion :convertion/coercion to higher type , Demotion :conversion/coercion to lower type

    // Type casting
    // int total{100};
    // int number{8};
    // double average{0.0};

    // cout<<total/number<<endl; 
    // cout<<static_cast<double>(total)/number<<endl; //convert either 1 to a double


    // Equality operator, ==, !=
     
    //if written, bool result will be displayed either true or false
    // if not used then bool result will be either 1 or 0

    // cout<<boolalpha<<endl;
    // bool isEqual{false};
    // bool isNotEqual{false};
    // int num1{},num2{};
    // cout<<"Enter two numbers :"<<num1<<num2<<endl;
    // cin>>num1>>num2;
    // isEqual=(num1==num2);
    // isNotEqual=(num1!=num2);
    // cout<<"Equal result is "<<isEqual<<endl;
    // cout<<"Not equal result is "<<isNotEqual<<endl;

    
    //Equality operator >= <= > < 


    // Logical Operator
    // ! not it is unary operator (eg !a) , && and , || or both "and" and "or" are binary
    // Order of precedence ! > && > ||

    // short circuit evaluation eg1:exp1 &&exp2 && exp3 if first condition is false, it wont 
    // bother checking 2nd and 3rd condition 
    // eg2:exp1 || exp2|\ exp 3 ,if first condition true it wont check other conditions

    // compound operator:operators followed by = symbol:used to manipulate bits and r called bit wise operator
    


    return 0;
}