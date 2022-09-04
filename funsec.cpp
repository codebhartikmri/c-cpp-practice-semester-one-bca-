#include<iostream>
using namespace std;
void evenodd();
int main()
{

    evenodd();

    return 0;
}
void evenodd(){
int n;
    
    cout << "enter any no" << endl;
    cin >> n;
    if(n%2==0){

        cout << "even" << endl;

    }else{

        cout << "odd" << endl;
    }

    
}