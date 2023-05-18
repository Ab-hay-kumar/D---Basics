// Pattern 1
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cout << "Enter the value upto which pattern is needed";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int k = i;
        while (j <= i)
        {
            cout << k;
            k = k + 1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}
// Pattern 2

#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cout << "Enter the value upto which pattern is needed";
    cin >> n;
    while (i <= n)
    {
        int j = 1, k = i, m = 1;
        while (m <= n - i)
        {
            cout << " ";
            m = m + 1;
        }
        while (j <= i)
        {
            cout << k;
            k = k + 1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}*/

// Pattern 3
#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cout << "Enter the value upto which pattern is needed";
    cin >> n;
    int j = 1;
    while (i <= n)
    {
        int k = 1, m = 1;

        while (k < n - i + 1)
        {
            cout << " ";
            k = k + 1;
        }
        while (m <= j)
        {
            cout << "*";
            m = m + 1;
        }

        j = j + 2;
        i = i + 1;
        cout << endl;
    }
}

// Pattern 3

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        char starter = 'E' - i;
        while (j <= i)
        {
            char c = starter + j;
            cout << c;
            j++;
        }
        cout << endl;
        i++;
    }
}