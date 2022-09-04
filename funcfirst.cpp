#include<iostream>
using namespace std;

void sum(int a,int b);//declare //prototype


int main(){

    int g, y;
    cin >> g >> y;

    sum(g, y);//call

    return 0;
}


void sum(int a,int b){ //define 

    cout << "sum = " << a + b;
}
