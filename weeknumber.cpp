#include <iostream>
using namespace std;
int main()
{
    int n;
    //n = 7
    cin >> n;
    if (n == 1)
    {
        cout << "sunday" << endl;
    }
    else if (n == 2)
    {
        cout << "monday" << endl;
    }
    else if (n == 3)
    {
        cout << "tuesday" << endl;
    }
    else if (n == 4)
    {
        cout << "wednesday" << endl;
    }
    else if (n == 5)
    {
        cout << "thursday" << endl;
    }
    else if (n == 6)
    {
        cout << "friday" << endl;
    }
    else if (n == 7)
    {
        cout << "saturday" << endl;
    }
    else
    {
        cout << "not oher option" << endl;
    }
    return 0;
}