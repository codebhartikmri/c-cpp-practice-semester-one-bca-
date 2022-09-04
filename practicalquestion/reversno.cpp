#include<iostream>
using namespace std;
int main(){
    int r, sum =0, n;
    cout << "enter any 3 digit number = " << endl;
    cin >> n;
    r = n % 10;//r=3
    sum = r;
    n = n / 10;
    r = n % 10;
    sum = sum * 10 + r;
    n = n / 10;
    sum = sum * 10 + n;
    cout << "revers" << sum << endl;
    return 0;
}