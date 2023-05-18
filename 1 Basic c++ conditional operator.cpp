#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter the character" << endl;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        cout << 1;
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << 0;
    }
    else
    {
        cout << -1;
    }

    // printing the value from 1 to 10
    int a = 0;
    while (a <= 10)
    {
        cout << a << endl;
        a++;
    }
}
