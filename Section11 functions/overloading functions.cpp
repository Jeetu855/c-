#include<iostream>

using namespace std;
// int add(int,int);
// double add(double,double);
// both functions have same name but take different inputs

void swap(int &a,int &b);
void print_array(int arr[],size_t);
void set_array(int arr[],size_t,int value);

void print_array(int arr[],size_t size){
    for(size_t i{0};i<size;i++){
        cout<<arr[i]<<endl;
    }

    return;
}

void set_array(int arr[],size_t size,int value){
    for(size_t i{0};i<size;i++){
        arr[i]=value;
    }
}
// ***** if we want to make our arrays such that the values cant be changed,
// use const while decalring them eg void print_arr(const int arr[]) this makes arrays immutable

int main(){

    // cout<<add(2,3)<<endl;
    // cout<<add(3.6,1.8)<<endl;

    // *************Passing arrays to functions********************

    // eg void print(int a[])
    // int test_scores[6] {100,95,99,88,96};
   
    // cout<<test_scores<<endl; //array name prints out location of first character
    // int my_scores[]{100,98,90,86,82};
    // ******* we need to specify the length of array, very important****
   
    // print_array(my_scores,5);
    // set_array(my_scores,5,100);
    // print_array(my_scores,5);
    // *******whenever a array is encountered, we go to the location of first element
    // when we pass array in function, the loacation of first element is passed behind the scenes
    
    // *********Pass by Reference*****************

    // when we pass a pramaeter to a function ,default is pass by value and 
    // a copy of actual parameter is made and passed
    
    // when we pass array we dont pass value but rather the location of first element
    // so in case of array we dont make a copy while passing parameter

    // pass by reference we pass the location so when formal value changes actual value also changes
    // eg void scale(int &num)

    int x{10},y{20};
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}

// int add(int a,int b){
//     return a+b;
// }

// double add(double a,double b){
//     return a+b;
// }

void swap(int &a,int &b){ //if we dont pass by ref. , a copy will be passed and the actual values wont be swapped
    int temp=a;
    a=b;
    b=temp;
}