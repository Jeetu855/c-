#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // for(int i{1};i<=10;i++){
    //     for(int j{1};j<=10;j++){
    //         cout<<i<<"*"<<j<<"="<<i*j<<" ";
    //         if(j==10){
    //             cout<<"\n";
    //         }
    //     }
    // }

    // ****inner loop loops faster than the outer loop
    // vector<vector<float>> ratings{
    //     {1,2,3,4},
    //     {4,4,3,4},
    //     {5,4,5,1},
    //     {1,3,4,4}
    // };
    // for(auto rating:ratings){
    //     for(auto rate:rating){
    //         cout<<rate<<endl;
    //     }
    // }

    // star pattern**********
    for (int i{1}; i <= 5; i++)
    {
        for (int j{1}; j <= 5; j++)
        {
            if (j <= i)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}