#include <iostream>
#include <string>
#include <vector>
using namespace std;

// void getVal(int &val){ //*function only takes l_values
//     cout<<val<<endl;
// };
// void getVal(int &&val){ //*function only takes r_values(overloaded)
//     cout<<val<<endl;
// };
// *can be ovrloaded
void getVal(const int &val)
{ //*function takes both  l_values and r_values
    cout << val << endl;
};

int main()
{

    int lval = 5;
    getVal(lval);
    getVal(5); //*error as function only accept's lValues
    return 0;
}