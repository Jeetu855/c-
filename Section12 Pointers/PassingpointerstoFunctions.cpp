#include <iostream>
#include <vector>
#include <string>

using namespace std;
void double_data(int *int_ptr); // function taking a poinyer as a parameter
int main()
{
    // int score{100};
    // int *score_ptr{&score};
    // cout<<score<<endl;
    // double_data(score_ptr); // same as double_data(&score)
    // double_data(&score);
    // cout<<"\n"<<score;

    // ***Returning pointer from a function**

    // name of function preceedes with a * eg: int* largestInt(function name)(parameters)

    // **pointer pitfalls 1)uninitialised ptr
    // 2)dangling pointers: point to memory thats no longer valid
    // 3) memory leak

    // **Refrence**

    // int num{100};
    // int &ref{num}; //ref is alias to num
    // cout<<num<<endl;
    // cout<<ref<<endl;//& its like ptr which is referenced and derefrenced automtically behind the scenes
    // num=200;
    // cout<<num<<endl;
    // cout<<ref<<endl;
    // ref=300;
    // cout<<num<<endl;
    // cout<<ref<<endl;

    // vector<string> stoges{"Larry", "Moe", "Curly"};
    // for(auto name:stoges){
    //     name="Funny"; //renaming every element to funny
    //     //above line changes a copy of the elements
    // }

    // for(auto name:stoges){ //but the names dont change since there copy was changed
    //     cout<<name<<endl;
    // }

    // for(auto &name:stoges){ //thiss will change since pass by ref and not by value
    //     name="Funny";
    // }

    //  for(auto name:stoges){ //names changed to funny
    //     cout<<name<<endl;
    // }

    // **L-values and R-values
    // lvalues :1)values that have nnames and are addressable,2)modifiale if they are not constant,3)occupies location in memory
    // r-vals are literals like :100,"Jitesh" etc

    return 0;
}
void double_data(int *int_ptr)
{                  // passing the pointer
    *int_ptr *= 2; // first we r derefrencing the ptr then multiplying by 2
    cout << "\n"
         << *int_ptr; // o/p 200
}