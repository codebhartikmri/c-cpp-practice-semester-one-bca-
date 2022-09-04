#include <iostream>
using namespace std;
int main()
{

    int R, C;
    cout << "hey user please enter the row you want for matrix" << endl;
    cin >> R;
    cout << "please enter the column " << endl;
    cin >> C;

    int arr[R][C];

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {

            cout << "Please enter value for position " << i << "and " << j << endl;
            cin >> arr[i][j];
        }
    }

    return 0;
}
