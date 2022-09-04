#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l, es, rs;
    for (i = 0; i <= 5; i++)
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

        cout << endl;
    }
    for (i = 0; i <= 5; i++)
    {
        for (es = 1; es <= i; es++)
        {
            cout << " ";
        }
        for (rs = 5; rs >= i; rs--)
        {
            cout << "*";
        }
        for (l = 4; l >= i; l--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}