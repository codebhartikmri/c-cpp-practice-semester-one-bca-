//WAP a program to revers any three digit no
#include<iostream>
using namespace std;
class Revers{
    int n, sum =0, r;
    public:
    void input()
    {
        cout << "please enter any 3 digit no" << endl;
        cin >> n;
    }void process()
    {
        r = n % 10;
        sum = r;
        n = n / 10;
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
        sum = sum * 10 + n;
    }void output()
    {
        cout << "your result here " << sum << endl;
    }
};
int main()
{
    Revers obj;
    obj.input();
    obj.process();
    obj.output();
    return 0;
}