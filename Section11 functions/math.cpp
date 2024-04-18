#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << sqrt(196) << endl;
    cout << cbrt(64) << endl;
    cout << pow(8, 2) << endl;

    cout << floor(5.9) << endl;
    cout << ceil(5.1) << endl;
    cout << round(5.5) << endl;

    size_t count{10}; // size_t is unsigned int
    int random_number{};
    int min{1};
    int max{6};

    cout << "RAND_MAX on mys system is : " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i = 1; i <= count; i++)
    {
        random_number = rand() % max + min; // random number is between 0-32767(2^15 -1) so we first take modulo
        // the max range number we want it to have coz the remainder will always be less than max
        // then we add 1 to get min and max inclusive, in this case
        // we modulo by 6 so remainder between 0-5 so we add min to get min and max included

        cout << random_number << endl;
    }

    return 0;
}