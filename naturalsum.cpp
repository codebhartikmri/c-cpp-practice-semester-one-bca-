//Write a program sum of first 10 natural numbers;

#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int sum = 0;
    while (i < 10)
    {
        sum = sum + i;
        i++;
    }
    cout << sum << endl;
    return 0;
}