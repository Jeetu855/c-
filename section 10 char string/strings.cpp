#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    // ! Array vs Vector same as C-style string vs C++-style string,just vector and c++ string are classes
    //*************************** C string***********************************************

    //* sequence of char, stored contiguously in memory,implemened as array of characters
    //* terminated by a null character(\0)(NULL)character with a value of zero,null character sets all bits to zero
    //* string litarals are constant, often called null terminated strings

    char my_name[7]{"Jitesh"};
    //* length 7,last character at 6 coz start from 0 and coz 1 space for null character;
    //! in above eg, need to put length 7 coz 6 char and 1 null char , putting length 6 will throw an error
    //! but when using strlen() it will be 6 coz length of null char not included in strlen()
    //! also printing name of array of char returns a string while printing
    //! name of an array of int or float or double returns address of first element

    cout << my_name << "\n";
    cout << strlen(my_name) << "\n";
    cout << my_name[6] << "\n";

    // my_name[3]='x';//! this is not possible as c style strings are immutable
    // however  lets take another eg:
    // char name[8]{"Jitesh"};
    // first 5 value have characters stored, but next all 3 are null
    // so we can change [6] and [7] in this case
    // cout<<name[5]<<endl;
    // cout<<name[6]<<endl;
    // name[6]='S';
    // cout<<name[6]<<endl;
    // !c-style string literal dont work with + sign, need to use strcpy
    // **************
    // char name[8];
    // name="Jitesh";//! not allowed****** dont run this code
    // we have too use a method called strcpy(string copy)

    //* strcpy(name,"Jitesh");// this is ok

    // null character very imp, eg to count length of string
    // the counting stops when compiler reaches null character

    // char str[50];
    // strcpy(str,"Hello ");
    // strcat(str,"World");//concatenate

    // cout<<strlen(str)<<endl;// length 11 as there is space after hello
    // ! strlen(does not count null char)
    // char full_name[50]{};
    // cout<<"Enter full name"<<endl;
    // cin>>full_name;
    // cout<<"Your full name is "<<full_name; //this wont print complete Jitesh Shamdasani coz
    // as soon as it encounter " " between the name it stops so for that we need to use

    // char full_name[50]{};
    // cout<<"Enter full name"<<endl;
    // cin.getline(full_name,50);//* name of variable and length it can take as input
    //  cout<<"Your full name is "<<full_name;
    //  strcmp(first val to compare,second val to compare) string compare, gives output 0 if same

    // C++ string ********************************************************
    // *contiguous in mem, dynamic size, can be converted to c-style string,provides bounds check

    // string s1;// automatically initialized to 0 like vector vs array
    // string s2{"Jitesh"};
    // string s3{"Jitesh",3};//Jit
    // string s4(3,'J');//JJJ
    // string s5(s2,0,2);//Ji

    // s1="C++ is better than java";
    // s2="Hello";

    // cout<<s2<<" "<<s1<<endl;
    // cout<<s1[2]<<endl;
    // cout<<s1.at(2)<<endl;
    // for(auto c:s2){
    //     cout<<c<<endl;
    // }
    // can use operaotrs to check if strings are same;
    // cout<<boolalpha;

    // **********************
    // string s1{"Apple"};
    // string s2{"Banana"};
    // string s3{"Kiwi"};
    // string s4{"apple"};
    // string s5{s1};

    // bool a1= (s1==s5);
    // cout<<a1<<endl;

    // ******************substr(start_index,length)
    //.find(str_name)
    // string s1{"This is a test"};
    // cout<<s1.substr(0,4)<<endl;
    // cout<<s1.substr(5,2)<<endl;
    // cout<<s1.substr(10,4)<<endl;

    // cout<<s1.find("This")<<endl; //0 gives start index
    // cout<<s1.find("is")<<endl;//2 'is' is present is 'this' as well
    // cout<<s1.find("test")<<endl;//10
    // cout<<s1.find("e")<<endl;//11

    // ************* .erase(startIndex,length) .clear()-- makes string empty

    // cout<<s1.erase(0,5)<<endl;
    // cout<<s1.length()<<endl;
    // s1+=" James";
    // cout<<s1<<endl;

    string s1;
    cout << "enter full name" << endl;
    getline(cin, s1); // *take input until new line
    cout << s1 << endl;
    cout << s1.length() << "\n";

    return 0;
}