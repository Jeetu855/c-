#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Array
{
private:
    int *arr;
    int length;
    int size;

public:
    Array(int length, int size);
    void append(int x);
    ~Array();
    void get_length()
    {
        cout << length << "\n";
    };
    void get_size()
    {
        cout << size << "\n";
    }
    void display();
    void insert(int index, int x);
    void del(int index);
};

Array::Array(int length, int size) : length{length}, size{size}
{
    arr = new int[size];
    for (size_t i = 0; i < length; i++)
        arr[i] = i + 1;
}

void Array::append(int x)
{
    if (length < size)
    {
        arr[length] = x;
    }
    length++;
}

Array::~Array()
{
    delete[] arr;
}

void Array::display()
{
    for (size_t i = 0; i < length; i++)
        cout << arr[i] << " ";
}

void Array::insert(int index, int x)
{
    if (length < size && index >= 0)
    {
        for (size_t i = length; i > index; i--)
            arr[i] = arr[i - 1];
    }
    arr[index] = x;
    length++;
}

void Array::del(int index)
{
    int x{}, i{};
    if (index >= 0 && index < length)
    {
        for (i = index; i < length - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        length--;
    }
}

int main()
{
    Array arr1{5, 10};
    arr1.display();
    cout << "\n";
    // arr1.get_length();
    // arr1.append(9);
    // arr1.display();
    // cout << "\n";
    // arr1.get_length();
    arr1.insert(2, 11);
    arr1.display();
    cout << "\n";
    arr1.del(2);
    arr1.display();
    return 0;
}