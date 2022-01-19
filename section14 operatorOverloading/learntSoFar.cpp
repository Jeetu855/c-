#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
// ****C++ treats c stryles strings  as C++ style strings
// * and the name of a char string prints the string not the address
// * also the ptr to a char string when printed returns string not address
//*when we print derefrenced name of int or char array we get first element
class MyString
{
private:
    char *str; // ptr to a char[] thats holds a C-style string
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    ~MyString();
    void display();
    int get_length();
    const char *get_str(); //return ptr to a char
};

MyString::MyString() : str{nullptr}
{
    str = new char[1];
    *str = '\0';
};

MyString::MyString(const char *s) : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1]; //+1 for null character
        strcpy(str, s);                //copying 's' to 'str'
    }
};

MyString::MyString(const MyString &source) : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
};

MyString::~MyString()
{
    delete[] str;
}

void MyString::display()
{
    cout << str << ":" << get_length() << endl;
};
int MyString::get_length()
{
    return strlen(str);
};

const char *MyString::get_str()
{
    return str;
}

int main()
{
    MyString empty;
    MyString larry{"Larry"};
    MyString stooge{larry};

    empty.display();
    larry.display();
    stooge.display();
    return 0;
}
// *C++ treats arrays of characters and char *  as strings.
// Frank's explanation from post: https://www.udemy.com/beginning-c-plus-plus-programming/learn/v4/questions/5559820
//Mystring(const char *s); and passing in {"Larry"}
//"Larry" is a C-style string literal. The compiler puts "Larry" somewhere in memory
// and uses the address of where it stores it internally.
// So, when we pass "Larry" to the constructor the compiler passes the address of "Larry"
// which is the address of the 'L' which is the address of a character
// which is a char * and since it is a literal it is a const char *

// Overloaded constructor
// called with statements like: Mystring larry {"Larry"};
// Mystring::Mystring(const char *s)
// s is a local variable of type: pointer to constant character who lives a short life on the overloaded Mystring's stack frame
// s, the pointer also has its own memory address at &s but nobody is interested in it right now
// s gets assigned a 'primary' value: the temporary object's memory address containing the string literal, now the memory location of 'L'
// if s is dereferenced, it has a 'secondary' value which is the first character's value, now 'L'
//     : str{nullptr}
// {
//     if (s == nullptr)
//     {
//         str = new char[1];
//         *str = '\0';
//     }
//     else
//     {
// str is a pointer defined as a private variable in class Mystring
// str's type is also a pointer to character
// str's 'primary' value is currently 0 or nullptr
// str's dereferenced ('secondary') value is nothing
// str = new char[std::strlen(s) + 1];
// some storage is allocated on the heap without a name
// the memory address of this newly allocated storage becomes str's 'primary' value
// std::strcpy(str, s);
// strcpy takes the 'primary' value of s, which is the memory location of the first character: 'L'
// strcpy loops through the memory locations following it until it finds a memory location which contains '\0'
// concatenates all the characters from the first memory address until '\0' which is "Larry\0"
// and puts it to the memory location allocated on the heap which becomes str's 'secondary' value if dereferenced

// cout is able to display the memory address of the pointer itself (&s)
// cout is able to display the dereferenced ('secondary') value, which is the first character in the sequence
// cout doesn't display the 'primary' value - which is the memory address of the location the pointer points to - because in case of characters
// it is programmed to show the characters concatenated until the next terminating null character, instead
// std::cout << &str << " " << &s << std::endl; // pointer's own memory address
// std::cout << str << " " << s << std::endl;   // pointed to object's memory address but instead it displays: Larry
// std::cout << *str << " " << *s << std::endl; // pointed to object's value: displays one character: L
// std::cout << &str[0] << '\n'                 // prints: Larry
//           << &str[1] << '\n'                 // prints: arry
//           << &str[2] << '\n'                 // prints: rry
//           << &str[3] << '\n'                 // prints: ry
//           << &str[4] << '\n';                // prints: y

// strcpy @ http://www.cplusplus.com/reference/cstring/strcpy/
// char * strcpy ( char * destination, const char * source );
// Copies the C string pointed by source into the array pointed by destination
// including the terminating null character (and stopping at that point).
//     }
// } // the function completes: s gets destroyed