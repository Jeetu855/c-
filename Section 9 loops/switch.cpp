#include <iostream>

using namespace std;

int main()
{
    double num1{}, num2{};
    char operation{};
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    cout << "Enter the operation" << endl;
    cin >> operation;
    switch (operation)
    { // in switch, the control expression must evaluate to an integer type
    case '+':
        cout << "The sum is " << num1 + num2 << endl; // cannot use double quotes for case ''
        break;
    case '-':
        cout << "The difference is " << num1 - num2 << endl;
        break;
    case '/':
        cout << "The division is " << num1 / num2 << endl;
        break;
    case '*':
        cout << "The product is " << num1 * num2 << endl;
        break;
    default:
        cout << "No operation specified" << endl;
        break;
        // the case expression must evaluate to a constant value
    }

    // enums are mapped to integers behind the scene If the first enumerator does not have an initializer,
    // the associated value is zero. For any other enumerator whose definition does not have an initializer, the associated value
    // is the value of the previous enumerator plus one.

    // enum Direction { left, right, up, down};// first value initialised to 0
    // Direction heading{left};
    // int a{left};  // left is implicitly converted to 0
    // int b{right}; // right is implicitly converted to 1
    // int c{up};    // up is implicitly converted to 2
    // int d{down};  // down is implicitly converted to 3
    return 0;
}