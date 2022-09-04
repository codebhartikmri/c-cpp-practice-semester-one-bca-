#include <iostream>
using namespace std;
void bhartiamit();
int sum(int a, int b);
int sub(int p, int q);
int mul(int c, int d);
int bhag(int r, int s);

int main()
{
    // bhartiamit();
    int aa = sum(10, 12); // 22<
    cout << "sum=" << aa << endl;
    int r = sub(20, 12);
    cout << "sub" << r << endl;
    int k = mul(7, 8);
    cout << "mul" << k << endl;
    int g = bhag(8, 2);
    cout << "bh" << g << endl;
    return 0;
}
void bhartiamit()
{
    cout << "amitbharti" << endl;
}
// arguments
int sum(int a, int b)
{
    cout << "a==" << a << endl;
    cout << "b==" << b << endl;
    int s = a + b;
    // cout << "sum=" << s << endl;
    return s;
}

int sub(int p, int q)
{

    cout << "p==" << p << endl;
    cout << "q==" << q << endl;
    int mi = p - q;

    return mi;
}
int mul(int c, int d)
{
    cout << "c==" << c << endl;
    cout << "d==" << d << endl;
    int guna = c * d;

    return guna;
}
int bhag(int r, int s)
{

    cout << " r== " << r << endl;
    cout << " s== " << s << endl;
    int bh = r / s;
    return bh;
}
