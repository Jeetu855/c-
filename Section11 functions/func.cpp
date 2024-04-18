#include <iostream>

using namespace std;
int add(); // function prototype

void say_world()
{
    cout << " World!" << endl;
    return;
}

void say_hello()
{
    cout << "Hello";
    say_world();
    return;
}

int main()
{
    //*********execution always begins with main function;**********

    // say_hello();// function being called has to be declared before from the place its being called
    // because it needs to check if func has a return val and if the paramters entered are ccorrect or not

    // ***************Function prototype**********************
    // tells compiler what it needs to know without full function definition
    // also called forward declarations and are placed at begining of programs

    // cout<<add(); //defining function after calling it as protype of function is given at the top

    return 0;
}

int add()
{
    int a{}, b{};
    cin >> a >> b;
    return a + b;
}