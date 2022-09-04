#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << "this number is positive" << endl;
    }
    if (a < 0)
    {
        cout << "this number is negative" << endl;
    }
    if (a == 0)
    {
        cout << "this number is zero" << endl;
    }
    return 0;
}