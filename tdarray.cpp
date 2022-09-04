#include <iostream>

using namespace std;

int main()
{

    int ggg[9][5] = {{5, 4, 8, 7, 9},
                     {5, 7, 8, 6, 5},
                     {7, 9, 6, 5, 4},
                     {3, 6, 7, 8, 9},
                     {6, 8, 4, 5, 3},
                     {9, 8, 7, 6, 8},
                     {6, 9, 5, 5, 7},
                     {8, 0, 6, 5, 4},
                     {5, 8, 9, 5, 4}};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << ggg[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// example of 1D array
//  int main()
//  {

//     int arr[5];

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "please enter the value at position " << i << endl;
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }