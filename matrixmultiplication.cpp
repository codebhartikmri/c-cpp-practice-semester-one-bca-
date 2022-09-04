#include <iostream>
using namespace std;
int main()
{

    int a[2][2] = {{2, 3}, {5, 9}}, b[2][2] = {{99, 88}, {54, 76}}, mul[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}