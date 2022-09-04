#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int arr[4][4] = {{7, 9, 7, 8}, {4, 5, 8, 9}, {5, 8, 7, 6}, {7, 9, 3, 2}};
    int brr[4][4] = {{3, 5, 9, 7}, {6, 7, 8, 4}, {4, 2, 1, 2}, {8, 9, 4, 3}};
    int bm[4][4];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            bm[i][j] = arr[i][j] + brr[i][j];

            cout << bm[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}