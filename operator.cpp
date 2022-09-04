#include <iostream>

using namespace std;
int main()
{

    //unary operator expression

    int a = 6, b = 7;
    int a1 = 1, b1 = 1;
    int sum = a + b; //unary operator here +(plus is operator)
    int sub = b - a; //unary operator here -(minus is operator)

    /*
    binary operator expression
    1 && 0 = 
    */

    cout << (a1 && b1) << endl;
    cout << (a1 || b1) << endl;
    cout << " not operator" << !a1 << endl;
    a += a; // a= a+n;
    //a = +b; // a= a+b;
    cout << "sumation = " << a;

    return 0;
}