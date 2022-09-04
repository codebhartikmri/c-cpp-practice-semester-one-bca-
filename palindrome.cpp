#include <iostream>

using namespace std;

int reverse(int number); //declare

int main()
{
    int ss = 10;
    while (ss != 0)
    {
        int number;
        cout << "hey user please enter a number to check if palindrome it is or not " << endl;
        ;
        cin >> number;
        int rev = reverse(number);

        if (rev == number)
        {
            cout << "Yes it is a palindrome " << endl;
        }
        else
        {
            cout << "No this is not a palidrome" << endl;
        }

        cout << "if you want to check more press 1 or otherwise press 0" << endl;
        cin >> ss;
    }

    return 0;
}

int reverse(int n) //define

{

    int sum = 0;

    while (n != 0)
    {
        int a = n % 10;
        sum = sum * 10 + a;
        n = n / 10;
    }
    return sum;
}