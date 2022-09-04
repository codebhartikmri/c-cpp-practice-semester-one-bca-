#include<iostream>
using namespace std;
class Calculator{

    int a, b;
    char ch;

public:
    void input()
    {
        cout << "enter any  two no" << endl;
        cin >> a >> b;
    }
    void  process(){
        cout << "what operation do you want " << endl;
        cin >> ch;
        switch (ch)
        {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << "sum" << a - b << endl;
                break;
            case '*':
                cout << "mul" << a * b << endl;
                break;
            case '/':
                cout << "div" << a / b << endl;
                break;
            default:
                cout << "i dont know" << endl;
            }
    }
};
int main(){

    Calculator obj;
    obj.input();
    obj.process();
        // cout << obj.input() << obj.process() << endl;
    return 0;
}