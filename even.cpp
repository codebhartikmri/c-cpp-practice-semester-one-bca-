#include<iostream> ma
using namespace std;
int main(){
    int mat[3][3]={{3,6,8},{9,6,5}};
    int i,j;
    
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){


        
    if(mat[i][j]%2==0)

        cout<<"even no"<<mat[i][j]<<endl;
    
        }
    }

    return 0;
}