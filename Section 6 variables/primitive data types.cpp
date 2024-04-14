#include <iostream>
#include <climits>

using namespace std;

int main()
{

    // char middle_initial{'V'};
    // cout<<"Middle initial is "<<middle_initial;

    // overflow :when assigned value dosent fit in given data type.
    // eg  long people_on_earth{7600000000}:overflow case
    //  will show random diffrent value coz long cannot store such hige value
    //  we need to use long long for it

    unsigned int num2{31};
    cout << "\nChar size in bytes " << sizeof(char);
    cout << "\nShort size in bytes " << sizeof(short);
    cout << "\nInt size in bytes " << sizeof(int);

    cout << "\nLong size in bytes " << sizeof(long);
    cout << "\nLong Long size in bytes " << sizeof(long long);
    cout << "\nDouble size in bytes " << sizeof(double);

    cout << "\nUnsigned int size in bytes " << sizeof(num2);

    cout << "\nMin char value " << CHAR_MIN;
    cout << "\nMin int value " << INT_MIN;

    cout << "\nMax char value " << CHAR_MAX;
    cout << "\nMax int value " << INT_MAX;

    return 0;
}