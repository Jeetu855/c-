#include<iostream>
#include<vector>

using namespace std;

int main(){
    // for(inititalisation;condition;increment)
    // for(int i{0};i<=10;i++){
    //     cout<<i<<"\n";
    // }


    // for(int i{1};i<=30;i++){
    //     if(i%2==0){
    //         cout<<i<<" is an even number"<<endl;
    //     }else{
    //         cout<<i<<" is an odd number"<<endl;
    //     }
    // }

    // int arr1[]{100,95,78,91,65};
    // for(int i{0};i<=4;i++){
    //     cout<<arr1[i]<<endl;
    // }

    // , operator right to left associativity
    // for (int i{1},j{7};i<=10;i++,j++){
    //     cout<<i<<"*"<<j<<"="<<i*j<<endl;
    // }

    // **********************Ranged based for loop
    // for(varType varName:sequence) eg:

    // int scores[]{76,89,56,34,99};

    // for(int score:scores){
    //     cout<<score<<endl;//for type we can just provide auto and compiler will figure out the type

    // }

    vector<float> nums {5,11,11,15,26,78,98};
    for(auto num:nums){
        cout<<num<<endl;
    }
    return 0;
}