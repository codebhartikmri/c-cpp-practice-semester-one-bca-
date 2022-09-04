#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int sum = a + b;
    cout << "this is the sum = " << sum << endl;
    int sub = sum - b;
    cout << "this is the sub = " << sub << endl;
    int mul = sub * sum - a;
    cout << "this is the mul = " << mul << endl;
    int div = mul / sub - sum;
    cout << "this is the div = " << div << endl;
    return 0;
}
