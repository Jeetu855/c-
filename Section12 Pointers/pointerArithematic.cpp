#include<iostream>
#include<string>

using namespace std;

int main(){
    // + increment int_ptr+=n (n*sizeof(type)) is the times its incremented
    // eg int_ptr+1 == int_ptr+4 in memory since int takes 4 bytes

    // int scores[]{100,96,91};
    // int *score_ptr{scores};

    // cout<<(score_ptr+0)<<endl;
    // cout<<(score_ptr+1)<<endl;
    // cout<<(score_ptr+2)<<endl;
    // ****************
    // cout<<boolalpha;
    // string s1{"Jitesh"};
    // string s2{"Jitesh"};

    // string *s1_ptr{&s1};
    // string *s2_ptr{&s2};
    // string *s3_ptr{&s1};

    // cout<<(s1_ptr==s2_ptr)<<endl; //false since address is diffrent even though values are same
    // cout<<(s1_ptr==s3_ptr)<<endl; //true as address is same

    // *******************

    // ***Pointers to consts****************

    // int high_score{100};
    // int low_score{50};
    // const int *score_ptr{&high_score};

    // *score_ptr=86; //error; since socre_ptr const
    // score_ptr= &low_score; //ok expression

    // // ******
    // int *const scoreptr{&high_score};
    // score_ptr= &low_score; //error as here address stroring cannot be changed

    // const int *const scorePtr=&high_score; //both the address and the value its pointing to cannot be changed




    return 0;
}