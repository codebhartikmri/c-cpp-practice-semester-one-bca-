#include <iostream>
using namespace std;
int main()
{

    int a = 5;

    //pointer
    int *c;
    c = &a;
    a = 10;

    cout << *c << endl; //c value a address hai print wo address uspe kya value hai
    return 0;
}