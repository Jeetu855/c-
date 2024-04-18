#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);

int main()
{

    // a function that calls itself,it call iteself directly or indirectly through another function
    // if we have 2 or more activation record(stack frame) for same function we call it recurrsion
    // we need to have a base case to stop recussion or it will recurse indefinitely
    // eg of base case in factorial:f(0)=1, in fibonacci:Fib(0)=0, Fib(1)=1

    // we can get same result as recussion when we use  loops

    // Factorial **********************************

    cout << factorial(10) << endl;
    cout << factorial(5) << endl;

    return 0;
}

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
    {
        return 1; // base case when n==0, it stops
    }
    else
    {
        return n * factorial(n - 1); // recurssive case
    }
}