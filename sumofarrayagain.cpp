#include <iostream>
using namespace std;
int main()
{
    int r[4] = {5, 7, 3, 8};
    int sum = 0;
    int i;
    for (i = 0; i < 4; i++)
    {

        sum = sum + r[i];
    }
    cout << sum << endl;

    return 0;
}