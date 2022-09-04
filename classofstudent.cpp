#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int roll_no;
};
int main(){

    Student s;
    s.name = "bharti_kumari";
    s.roll_no = 14;
    cout << "name  = " << s.name << " roll_no = " << s.roll_no << endl;
    return 0;
}