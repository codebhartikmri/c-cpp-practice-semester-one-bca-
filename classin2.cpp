#include <iostream>
using namespace std;
class Room
{

public:
    int length;
    int breadth;
    int heigth;

    int area()
    {
        return (length * breadth);
    }
};
int main()
{
    Room r1;
    r1.length = 30;
    r1.breadth = 10;
    int c = r1.area();
    cout << "area" << c << endl;
    return 0;
}