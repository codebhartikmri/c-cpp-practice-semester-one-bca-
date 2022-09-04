#include <iostream>
using namespace std;
int main()
{
    int x[5] = {3, 6, 5, 7, 1};
    int i;
    int smallest = 99999;
    for (int i = 0; i < 5; i++)
    {
        if (smallest > x[i])
        {
            smallest = x[i];
        }
    }
    cout << smallest << endl;
    return 0;
}