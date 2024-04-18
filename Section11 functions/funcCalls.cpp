#include <iostream>

using namespace std;

inline int add(int a, int b)
{ // inline function use keyword inline
    return a + b;
}

int main()
{
    // *********Function calls****************

    // functions us function call stack analogous to stack of books
    // LIFO-last in first out, push and pop:put and remove item from top
    // thse items are called stack frame or activation record
    // each time a function is called it creates a new activation record and pushes it onto the stack
    // when function terminated we pop the activation record
    // local vars and function parameters are allocated on stack
    //  stack size is finite

    // *********Inline functions********************

    int result{0};
    result = add(100, 200);
    cout << result << endl;

    return 0;
}