
#include <iostream>
using namespace std;

int main()
{
    int i = 89;
    int &x = i;
    cout << "i : " << i << endl;
    cout << "&i : " << &i << endl;
    cout << "&x : " << &x << endl;
    cout << "x : " << x << endl;
}