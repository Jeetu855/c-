#include <iostream>

using namespace std;

int main()
{

   //  int *int_ptr{nullptr};
   //  int_ptr=new int; // allocate an int on the heap

   //  cout<<int_ptr<<endl;
   //  cout<<*int_ptr<<endl; //garbage since uninitialised var

   //  *int_ptr=100;
   //  cout<<*int_ptr<<endl;

   //  delete int_ptr; //frees allocated storage

   // *****Realtion between arrays and pointers**************
   // value of array name is location(address) of the first element

   // int scores[] {100,95,98};

   // cout<<scores<<endl; //both the address value same o/p:address
   // cout<<*scores<<endl; //o/p:100

   // int *score_ptr{scores}; //no need to put & since name of array is location of first element

   // cout<<score_ptr<<endl; // o/p:address
   // cout<<*score_ptr<<endl; //both the values same o/p:100

   // we can also use subscript method to get individual elements of array with pointers

   // cout<<score_ptr[0]<<endl; // same as scores[0]
   // cout<<score_ptr[1]<<endl; // same as scores[1]
   // cout<<score_ptr[2]<<endl;// same as scores[2]

   /*    cout<<score_ptr<<endl;
      cout<<(score_ptr+1)<<endl; //4 bytes added since int takes 4 bytes
      cout<<(score_ptr+2)<<endl; //address

       cout<<*score_ptr<<endl;
      cout<<*(score_ptr+1)<<endl;  //values since we applying derefrencing operator
      cout<<*(score_ptr+2)<<endl;
   */
   return 0;
}

// !dynamic allocation means allocating memory during run time rather than on compile time which is the usual case
// !when we call int *x=&a; when the code is compiled it allocates required bytes for the pointer and stores the value in it
// !now eg:cin>>size; int *y=a[size];this wont work coz size of the array depends on user input provided which is done during run time
// !but size needs to be provided beforehand to execute this
// !to overcome this we use int *z=new int[size] which allocates size during runtime on the heap storage area
// !new keyword returns an address so we store it in a pointer