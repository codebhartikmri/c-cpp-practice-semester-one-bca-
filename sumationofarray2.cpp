#include <iostream>
using namespace std;
int main()
{
    int r[6] = {7, 6, 5, 4, 3, 9};
    int sum = 0;
    int i;
    for (int i = 0; i < 6; i++)
    {
        //sum = r[i] + sum;
        sum += r[i];
    }
    cout << sum << endl;
    return 0;
}