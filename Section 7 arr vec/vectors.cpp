#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // vector<char> vowels (5); //automatically set to zero

    // vector<int> test_scores  {100,98,91,78,81};

    // vector<double> high_temp(365,80); //*365 is size of vector and all values initialised to 80;
    //* vector have1)dynamic size ,2)sotred contiguously in memory
    //*3) provide functions for bounds check 4)elements automatically initialsed to zero
    //*5)object oriented containers defined in stl library 6) Mutable
    // use []subscript like array to get individual element
    // Access individual elements

    // another method to get individual elements .at
    vector<int> test_scores{100, 98, 91, 78, 81};
    cout << "Size is : " << test_scores.size() << "\n";
    cout << test_scores[1];
    cout << "\n"
         << test_scores.at(0) << endl;
    cout << test_scores.at(4) << endl;

    // to change value;
    test_scores.at(2) = 50; //*mutable
    cout << test_scores.at(2) << endl;
    // * .at() method of vector class performs bounds checking

    // to add new element
    test_scores.push_back(80);
    cout << test_scores.at(5) << endl;
    test_scores.push_back(90);
    cout << test_scores.at(6) << endl;

    // arrays dont show error message on bounds checking, vecotors do
    // *****using subscript method dosent do bound checking

    // get length of vector;
    cout << "Size is :" << test_scores.size() << endl;

    // 2-d vector

    vector<vector<int>> movie_rating{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}}; // 2d vector size=number of rows
    cout << movie_rating.at(1).at(0) << endl;
    cout << movie_rating.at(2).at(3) << endl;
    return 0;
}