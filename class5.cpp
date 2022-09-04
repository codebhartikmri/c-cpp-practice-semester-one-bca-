#include <iostream>
using namespace std;
class Triangle
{
public:
    float breadth;
    float heigth;
    float area()
    {
        float f = 1.0 / 2.0;
        return (f * breadth * heigth);
    }
};
int main()
{

    Triangle rr;
    rr.breadth = 3;
    rr.heigth = 2;
    float ss = rr.area();
    cout << "area = " << ss << endl;
    return 0;
}