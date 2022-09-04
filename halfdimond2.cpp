#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {

            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {

            cout << i;
        }
        for (l = 2; l <= i; l++)
        {

            cout << i;
        }

        cout << endl;
    }
    return 0;
}
