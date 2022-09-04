#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int rollno;
};
int main()
{
    Student o;
    o.name = "bharti";
    o.rollno = 3;

    cout << "name = " << o.name << endl;
    cout << "roll=" << o.rollno << endl;
    return 0;
}