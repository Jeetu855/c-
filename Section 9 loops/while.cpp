#include<iostream>

using namespace std;

int main(){
    //while(expression){increment inside loop} checking done at start of loop
    // int i{0};
    // while(i<10){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
        
    //     i++;
    // }

    //input validation********************
    // int num{};
    // cout<<"Enter an integer less than 100"<<endl;
    // cin>>num;
    // while(num>=100){
    //     cout<<"Enter an integer less than 100"<<endl;
    //     cin>>num;
    // }
    // cout<<"Thanks"<<endl;

    //*******************input validation using booleans
    bool isDone{false};
    
    while(!isDone){
        cout<<"Enter a number between 1 and 5"<<endl;
        int num{};
        cin>>num;
        if(num<=1 || num>=5){
            cout<<"Out of range, try again"<<endl;
        }else{
            cout<<"Thanks"<<endl;
            isDone=true;
        }
    }


    return 0;
}