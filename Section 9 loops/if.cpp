#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number" << endl;
    int num1{0};
    cin >> num1;
    if (num1 > 10)
    {
        cout << "The number you entered is greater than 10" << endl;
    }
    else
    {
        cout << "The nmber you entered is less than 10 " << endl;
    }

    return 0;
}