#include <iostream>
using namespace std;

class Human
{

public: // necessary
    int year;
    int age()
    {
        int age = 2022 - year;
        return age;
    }
};

int main()
{

    Human obj;
    obj.year = 2002;

    int sss = obj.age();
    cout << "age = " << sss << endl;
    return 100;
}