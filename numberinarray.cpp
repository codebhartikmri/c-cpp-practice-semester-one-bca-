#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    cout << "enter any number " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }
    cout << "the number are "
         << " " << endl;
    for (int n = 0; n < 5; n++)
    {
        cout << numbers[n] << " ";
    }
    return 0;
}