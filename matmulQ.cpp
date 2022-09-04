#include <iostream>
using namespace std;
int main()
{

    int r1, c1, r2, c2;
    int i, j, k;

    cout << "enter row and columns for firt matrix =";
    cin >> r1 >> c1;
    cout << "enter row and columns for second matrix =";
    cin >> r2 >> c2;

    int a[r1][c1];   // r1=2 c1=2 a[2][2]
    int b[r2][c2];   // b[2][2]
    int mul[r1][c2]; // mul[2][2]
    while (c1 != r2)
    {

        cout << "error! column of first matrix :";
        cout << "enter row and column for first matrix :";
        cin >> r1 >> c1;
    }
    cout << endl
         << "enter element of matrix 1 :" << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {

            cout << "enter element a " << i << j << ":";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {

            cout << "enter element b" << i << j << ":";
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {

            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    // 2*3
    // 3*2

    return 0;
}