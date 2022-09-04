#include <iostream>
using namespace std;
int main()
{
    int x[4] = {3, 5, 2, 6};
    int largest = 0; // 3//5//6
    int i;
    for (int i = 0; i < 4; i++)
    {
        if (largest < x[i])
        {
            largest = x[i];
        }
    }

    cout << largest << endl;
    return 0;
}