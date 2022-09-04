#include <iostream>
using namespace std;
int main()
{
    int r[6] = {4, 2, 5, 6, 8, 9};
    int largest = 0;
    int i;
    for (i = 0; i < 6; i++)
    {
        if (largest < r[i])

        {
            largest = r[i];
        }
    }
    cout << largest << endl;
    return 0;
}
