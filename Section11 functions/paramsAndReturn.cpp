#include <iostream>

using namespace std;
void param_test(int); // prototype
int add(int, int);
double calc_cost(double cost, double tax = 0.06); // second double has default value which we can overwrite if we want to
int main()
{
    // arguments are the values that can be passed inside a function: eg:getline(cin,name)

    // arguments are called parameters, they must match in number, order and type
    // int result{};
    // result=add(38,12);
    // cout<<result;

    // formal paramater:parameter defined in function header; has the copy of actual value and since its a copy its stored in a different location
    // actual parameter:parameter used in func call,the arguments
    //  when we pass a value to func, a copy of that value is passed to func eg:

    // int actual{50};
    // cout<<actual<<endl;//50
    // param_test(actual);//pass to param_test
    // cout<<actual<<endl;//50

    // **return statement immediately exits the function*******
    // return value is result of function call, return statement is optional when return type is void

    // default values:we have to provide function the values when we call it in the and values must be in right order
    // sometimes we can provide a default value prefarable in prototype as well so when we call it we dont have to tell that value
    // the default value is some value that rarely changes like tax which changes depending on the country

    // double val=calc_cost(100); // second double(tax) has a default value 0f 0.06 so we dont need to specify it until we have to change(overwrite it)
    // cout<<val;

    return 0;
}
int add(int a, int b)
{
    return a + b;
}
void param_test(int formal)
{                           // formal is a copy of actual
    cout << formal << endl; // 50
    formal = 100;           // only local copy changes, so actual still 50 while formal beocomes 100
    cout << formal << endl; // 100
}
double calc_cost(double cost, double tax)
{
    cost += (cost * tax);
    return cost;
}