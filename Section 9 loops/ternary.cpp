#include<iostream>

using namespace std;

int main(){
    int a{25},b{48},result{};
    result=(a>b?a-b:b-a);
    cout<<result<<endl;
    

    return 0;
}