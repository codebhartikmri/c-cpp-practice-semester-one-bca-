#include <iostream>
using namespace std;
class Human
{
public:
    int year;
    int age()
    {

        int age = 2022 - year;
        return age;
    }
};
int main()
{
    Human h;

    

    
    h.year;

    int r = h.age();
    cout << "age" << r << endl;
    return 0;
}