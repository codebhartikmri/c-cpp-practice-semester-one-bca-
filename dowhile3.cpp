#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << " even number" << endl;
        }
        else
        {

            cout << i << " odd number" << endl;
        }
        i++;
    } while (i < 10);

    return 0;
}