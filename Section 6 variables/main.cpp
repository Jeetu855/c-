#include<iostream>

using namespace std;
int main(){
    int num1,num2;
    double num3;
    // cout<<"Enter first number :";
    // cin>>num1;
    // cout<<"Enter second number :"; 

    //******************************************************************case 1 type num1 press enter type num 2

    /* ********************case 2 type num1 space num2, the second line wont ask for input and 
    ***********the final line will be displayed automatically */

    // cin>>num2;
    // cout<<"You typed "<<num1<<" and "<<num2<<".";
    cout<<"Enter an integer :";
    cin>>num1;
    cout<<"Enter a double :";
    cin>>num3;
    // ***** if we enter 10.5 for the first input, it will display 10 for interger and 0.5 will be stored in buffer
    // so it wont ask for input of double and display 0.5 for double

    return 0;
}