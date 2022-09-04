#include <iostream>
using namespace std;
int main()
{

    int mul = 1, number;
    cout << "enter any no" << endl;
    cin >> number;
    for (; number > 1; number--)
    {

        mul = mul * number;
    }

    cout << "fact = " << mul << endl;
    return 0;
}