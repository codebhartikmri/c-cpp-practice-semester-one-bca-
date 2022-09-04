#include<iostream>
using namespace std;
class Base
{
    private:
        int x = 30;

    protected:
        int y = 20;

    public:
        int z = 10;
};
class Derived : public Base
{
    private:
        int a = 12;

    protected:
        int b = 21;

    public:
        int c = 31;
        // int amit = x;
};
int main()
{

    Derived derived;
    // cout << derived.x << endl;
    // cout << derived.c << endl;
}
