#include<iostream>
using namespace std;
class Sum
{
    int x, y, sum;
    public:
    void input(){
        cout << "enter any number" << endl;
        cin >> x >> y;
    }
    void process(){
        sum = x + y;
    }
    void output(){
        cout << "sum" << sum << endl;
    }
};
int main()
{

    Sum obj;
    obj.input();
    obj.process();
    obj.output();
    return 0;
}
