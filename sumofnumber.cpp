#include<iostream>
using namespace std;
int main()
{
    int n, r, sum =0, s;
    cout << "enter any no = " << endl;
    cin >> n;
    
    r = n % 10;
    sum = r;
    n = n / 10;
    r = n % 10;
    sum = sum + r;
    n = n / 10;
    sum = sum + n;
    cout << "sum = " << sum << endl;
    return 0;
}