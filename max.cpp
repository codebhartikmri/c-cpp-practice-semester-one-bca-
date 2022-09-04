#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {

        if (a > c)
        {
            cout << "a is greater than c" << endl;
        }
        else
        {
            cout << "c  is greater than a,b" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is greater than c,a" << endl;
        }
        else
        {
            cout << "c is greater than a,b" << endl;
        }
    }
    return 0;
}
