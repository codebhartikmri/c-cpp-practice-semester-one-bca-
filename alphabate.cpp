#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << " a is a vowel" << endl;
        break;
    case 'e':
        cout << "e is a vowel" << endl;
        break;
    case 'i':
        cout << "i is a vowel" << endl;
        break;
    case 'o':
        cout << "o is a vowel" << endl;
        break;
    case 'u':
        cout << "u is a vowel" << endl;
    default:
        cout << "this is a consonent" << endl;
        break;
        return 0;
    }
}