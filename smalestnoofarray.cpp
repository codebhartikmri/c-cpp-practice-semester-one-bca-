#include <iostream>
using namespace std;
int main()
{
    int s[3] = {4, 6, 7};
    int smalest = 99;
    int i;
    for (i = 0; i < 3; i++)
    {

        if (smalest > s[i])
        {

            smalest = s[i];
        }
    }
    cout << "smalest = " << smalest << endl;

    return 0;
}