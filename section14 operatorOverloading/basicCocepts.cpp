#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //operators that cannot be overloaded
    // ::(scope resolution), :?(ternary), .(dot), sizeof, .*
    // precedence and associativity cannot be changed
    //arity of operator cannot be changed(i.e if operator is binary it cannot be made unary)

    //*how to overload operator
    // className &operator=(const className &rhs) //*lhs is (this) and rhs is the one we r assigning to
    // replace = with the operator u wish to overload

    //*eg MyString(className) &MyString::operator=(const MyString &rhs){
    //* if(this===&rhs){return *this} //case when we are assigning to itself(eg p1=p1)
    // * delete [] str //make it an empty string
    // * str=new char[std::strlen(rhs.str)+1] //+1 for null (\0)
    // * std::strcpy(this->str,rhs.str) then return *this
    // *} //this is pointer to current object so it holds address
    // * this is copy assignment

    // *for move assignement we use MyString &MyString::operator(MyString &&rhs)

    // cant create new operators

    return 0;
}