#include<iostream>
using namespace std;

int main(){

    // type name[constant number of elements];eg int test_scores[5] so array of length 5

    // eg on how to initialize int test_scores[5] {100,95,78,68,99}this is init list;
    // int high_score[10] {3,5} remaining values initialised to zero

    // int another_array[] {1,2,3,4,5} automatically the size is calculated

    // int test_scores[6] {100,95,99,88,96};
    // cout<<test_scores<<endl;
    // cout<<test_scores[0]<<endl; //array subscripting
    // cout<<test_scores[1]<<endl;
    // cout<<test_scores[2]<<endl;
    // cout<<test_scores[3]<<endl;
    // cout<<test_scores[4]<<endl;
   
    //  we can assign values to array as well using this format
    // cin>>test_scores[5];
    // cout<<test_scores[5]<<endl;

    // name of the array represents location of first element i.e element at [0]
    // array values not constant so we can change
    // test_scores[0]=92;
    // cout<<test_scores[0]<<endl;
    // cout<<test_scores; //give location of first element i.e test_scores[0]

    //2-d arrays int[arr1][arr2]: eg int movie_rating[3][4] 3 rows 4 columns 12 entries;

    int movie_rating [3] [4]{
        {0,4,3,5},
        {2,3,3,5},
        {1,4,4,5}
    };

    return 0;
}