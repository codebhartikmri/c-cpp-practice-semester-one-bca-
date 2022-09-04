#include<iostream>
using namespace std;
class Fectorial
{
    int i=1,  n = 0, s = 0, f=1;
    public:
    int fect(){
        cout << "how many term you want to calculate" << endl;
        cin >> n;
        for (; i <= n; i++)
        {
            f = f * i;
            // s += f;
        }
        return f;
    }
};

int main(){

    Fectorial obj;
    
    int y=  obj.fect();
    cout<< y << endl;
    return 0;
}
