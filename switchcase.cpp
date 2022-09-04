#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "tuesday";
        break;
    case 4:
        cout << "wednesday";
        break;
    case 5:
        cout << "thursday";
        break;
    case 6:
        cout << "friday";
        break;
    case 7:
        cout << "saturday";
        break;
    default:
        cout << "kuch nhi mila mere ko ";
        break;
    }
    return 0;
}