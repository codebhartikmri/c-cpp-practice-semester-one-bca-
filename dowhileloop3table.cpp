#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
        // cout << 3 * i << endl;

        cout << "3 * " << i << "=" << 3 * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}

/*----------------------------------------------------------------

3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 1 = 3
3 * 1 = 3
3 * 1 = 3
3 * 1 = 3
*/