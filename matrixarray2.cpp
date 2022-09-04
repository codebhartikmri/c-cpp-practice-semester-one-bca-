#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int arry[3][3] = {{8, 4, 3}, {5, 8, 3}, {6, 8, 7}};
    int brry[3][3] = {{8, 4, 3},
                      {5, 8, 3},
                      {6, 7, 5}};
    int bm[3][3];
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            bm[i][j] = arry[i][j] + brry[i][j];
            cout << bm[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}