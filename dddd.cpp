#include <iostream>
using namespace std;
struct bita
{

    float age; // 8 bit
    int phone; // 4  bit
} cat, rat, dog;

union uni
{

    float age; // 8 bit
    int phone; // 4 bit
    // char dd;
} dfasd, dfasdf, adfasdf, asdfasdfas;
int main()

{
    // bita dog; // 12 bit
    dog.age = 66.6;
    dog.phone = 77734524;

    cout << dog.age << endl;
    cout << dog.phone << endl;

    /////////////union //////////

    uni a; // 8 bit
    a.phone = 444444;
    a.age = 32;

    cout << a.phone << endl;
    cout << a.age << endl;

    return 0;
}
