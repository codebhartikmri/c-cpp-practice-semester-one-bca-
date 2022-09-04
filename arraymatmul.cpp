#include<iostream>
using namespace std;
int main(){
    int i, j, k;
    int x[2][2] = {{2, 2}, {8, 8}};
    int y[2][2] = {{4, 6}, {5, 6}};
    int xy[2][2] = {{5, 8}, {6, 7}};
    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 2;j++)
        {
            xy[i][j] = 0;

            for (k = 0; k < 2;k++){
                xy[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    cout << "mul" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2;j++){
            cout  << xy[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}