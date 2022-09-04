#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    char ch;
    cout << "enter the number" << endl;
    cin >> a >> b;
    cout << "what operation do you want?" << endl;
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        c = a - b;
        cout << c << endl;
        break;
    case '*':
        d = a * b;
        cout << d << endl;
        break;
    case 'e':
        e = a / b;
        cout << e << endl;
        break;
    default:
        cout << "humko samajh main nhi aa rha hai" << endl;
        break;
    }
    return 0;
}