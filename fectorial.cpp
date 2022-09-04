#include <iostream>
using namespace std;
float fact(int number)
{

    float mul = 1.0;
    for (; number > 1; number--)
    {

        mul = mul * number;
    }
    return mul;
}

int main()
{

    float sum = 0.0;
    int i;
    for (i = 1; i < 7; i++)
    {
        // cout << "sum" << sum << "baata" << (i / fact(i)) << endl;
        sum = sum + (i / fact(i));
        }

    cout << "fectorial" << sum << endl;
}