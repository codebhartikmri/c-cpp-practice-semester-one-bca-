#include <iostream>

using namespace std;
int main()
{
    int x[5] = {3, 5, 6, 8};
    int i;
    int greatest = 0;
    for (i = 0; i < 5; i++)
    {
        if (greatest < x[i])
        {

            // greatest < x[i];
            greatest = x[i];
        }
    }

    cout << greatest << endl;

    return 0;
}