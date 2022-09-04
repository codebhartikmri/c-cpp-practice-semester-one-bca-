#include <iostream>
using namespace std;
class Armstrong
{
    int s = 0, n, r, org;

public:
    void input()
    {
        cout << "enter any three digit no" << endl;
        cin >> n;
    }
    void process()
    {

        org = n;
        r = n % 10;
        s = s + r * r * r;
        n = n / 10;
        r = n % 10;
        s = s + r * r * r;
        n = n / 10;
        s = s + n;
    }
    void output()
    {
        if (s == org)
        {
            cout << "armstrong" << endl;
        }
        else
        {

            cout << "not armstrong no" << endl;
        }
    }
};
int main()
{

    Armstrong obj;
    obj.input();
    obj.process();
    obj.output();
    return 0;
}