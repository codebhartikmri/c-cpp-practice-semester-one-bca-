#include <iostream>
using namespace std;
struct gama
{
    float age;
    int phone;
};
union gan
{

    float age;
    int phone;
};
int main()
{
    gama rat;
    rat.age = 45;
    rat.phone = 3343456;
    cout << "age =" << rat.age << endl;
    cout << "phone =" << rat.phone << endl;
    gan man;
    man.age = 23;
    man.phone = 674538;
    cout << "age of man =" << man.age << endl;
    cout << "phone of man =" << man.phone << endl;

    return 0;
}