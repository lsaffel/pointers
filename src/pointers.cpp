#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << n << endl;
    cout << &n << endl;     // &n represents the address of the variable n
                            // prints out 0x7ff7bfeff168

    int* ptr = &n;
    cout << ptr << endl;    // prints out 0x7ff7bfeff168
    cout << *ptr << endl;    // * de-references the pointer.
                            // prints out 5, the value at that address

    *ptr = 10;      // changes the value at the address at ptr to 10,
                    // which is where n is stored
    cout << *ptr << endl;   // prints out 10

    cout << n << endl;      // prints out 10


    return 0;
}