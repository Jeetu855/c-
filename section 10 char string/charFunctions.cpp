#include<iostream>
#include<cctype>

using namespace std;

int main(){
    cout<<"Enter a character :";
    char c{};
    cin>>c;
    // *****checking functions
    // cout<<isdigit(c);// 1 is digit, 0 for anything else
    cout<<isalpha(c); //1 if uppercase alphabet, 2 if lowercase alphabet, 0 for anything else

    // ******* other functions
    // isspace(c), isupper(c) , islower(c)

    // conversion functions**************************
    // tolower(c),toupper(c)
    return 0;
}