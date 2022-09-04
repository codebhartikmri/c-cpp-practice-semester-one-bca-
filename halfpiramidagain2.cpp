#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l, m, n;
    for (i = 0; i <= 10; i++)
    {
        for (j = 10; j >= i; j--)
        {

            cout << "  ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << " *";
        }
        for (l = 2; l <= i; l++)
        {
            cout << " *";
        }
        cout << endl;
    }
    for (i = 0; i <= 10; i++)
    {
        for (m = 1; m <= i; m++)
        {

            cout << "  ";
        }
        for (n = 10; n >= i; n--)
        {
            cout << " *";
        }
        for (l = 9; l >= i; l--)
        {

            cout << " *";
        }
        cout << endl;
    }
    return 0;
}