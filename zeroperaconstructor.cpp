#include<iostream>
using namespace std;
class Sum
{
    int x, y;
    public:
        Sum()
        {
        }
        Sum(int a,int b){
            x = a, y = b;
        }
        void input(){
                cout<< "enter any number " << endl;
                cin >> x >> y;
        }
        void show()
        {

            cout << "sum " << x + y << endl;
        }
};
int main()
{
    Sum obj;
    obj.input();
    obj.show();
    Sum obj2(5, 10);
    obj2.show();
    return 0;
}