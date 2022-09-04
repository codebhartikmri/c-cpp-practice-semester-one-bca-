#include<iostream>
using namespace std;


void bharti();
void evenodd(int a);
int main(){
    bharti();

    evenodd(10);
    evenodd(17);
    return 0;
}
void bharti(){
    cout<<"hello main bharti hoon "<<endl;

}
void evenodd(int a){
if(a%2==0){

    cout<<"even"<<a<<endl;

}else{

    cout<<"odd"<<a<<endl;
}}

    
