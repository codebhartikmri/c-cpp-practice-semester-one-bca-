#include <iostream>
using namespace std;
int main()
{
    int r[7] = {5, 8, 9, 5, 4, 3, 2};

    int sum = 0;
    int i;
    for (i = 0; i < 7; i++)
    {

        sum = r[i] + sum;
    }
    cout << sum << endl;
    return 0;
}