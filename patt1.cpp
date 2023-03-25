/*

 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *

*/

#include <iostream>
using namespace std;
int main()
{
    int r = 1, n;
    cin >> n;
    while (r <= n-1)
    {
        int c = 1;
        while (c <= r)
        {
            cout << " *";
            c++;
        }
        cout << "\n";
        r++;
    }
    int r2 = n;
    while (r2 >= 1)
    {
        int c2 = 1;
        while (c2 <= r2)
        {
            cout << " *";
            c2++;
        }
        cout << "\n";
        r2--;
    }

    return 0;
}