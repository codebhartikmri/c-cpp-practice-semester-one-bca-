#include <iostream>

using namespace std;

void bharti(); // declare
void evenOdd(int a);

int main()
{

    bharti(); // call
    bharti(); // call

    evenOdd(10);
    evenOdd(17);
    return 0;
}

void bharti() // initialize
{

    cout << "hello mein bahrti hoon " << endl;
}

void evenOdd(int a)
{
    if (a % 2 == 0)
    {
        cout << "even" << a << endl;
    }
    else
    {
        cout << "odd" << a << endl;
    }
}