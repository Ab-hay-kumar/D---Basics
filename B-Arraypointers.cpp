// array pointers

#include <iostream>
using namespace std;
int main()
{
    int a[10];
    cout << *a << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(*a) << endl;
    cout << &a << endl;
    cout << &a[10] << endl;
    cout << a + 10;
    return 0;
}