#include<iostream>
using namespace std;
class Circle
{
    float r, pi;
    public:Circle()
    {
        pi = 22.0 / 7;

    }
    void input()
    {
        cout << "enter radius = " << endl;
        cin >> r;
    }void show()
    {
         int area = pi * r * r;
        cout << "area is = " <<  area << endl;
    }
};
int main()
    {
        Circle obj;
        obj.input();
        obj.show();
        return 0;
    }