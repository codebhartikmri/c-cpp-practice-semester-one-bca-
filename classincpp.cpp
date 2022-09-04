#include <iostream>

using namespace std;

class Room
{
public:
    int length = 40;
    int breadth = 50;
    int height = 42;

public:
    int area()
    {
        return (length * breadth);
    }
    int vol()
    {
        return (length * breadth * height);
    }
};

int main()
{

    Room r1, r2;

    int aa = r1.area();
    int vl = r1.vol();
    cout << "area =" << aa << "  volume=" << vl << endl;

    r1.length = 10;
    r1.breadth = 20;
    r1.height = 30;

    aa = r1.area();
    vl = r1.vol();

    cout << "area =" << aa << "  volume=" << vl << endl;

    return 0;
}