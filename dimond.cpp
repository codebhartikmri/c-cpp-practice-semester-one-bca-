#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l, m, n;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {

            cout << "*";
        }
        for (l = 2; l <= i; l++)
        {

            cout << "*";
        }
        for (m = 5; m <= i; m++)
        {
            cout << "*";
        }
        for (n = 6; n >= i; n--)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}