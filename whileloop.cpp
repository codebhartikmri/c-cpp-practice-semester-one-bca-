#include <iostream>

using namespace std;
int main()
{

    int i = 1;
    while (false)
    {
        cout << i << endl;
        i = i + 1;
    }

    return 0;
}