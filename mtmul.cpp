#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    int mul[2][2];
    int a[2][2] = {{3, 4}, {2, 3}};
    int b[2][2]={{3,2},{6,7}};
    for(i=0;i<2;i++){

        for(j=0;j<2;j++){
            mul[i][j]=0;
            for(k=0; k<2;k++){

                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<2;i++){

        for(j=0;j<2;j++){
            cout << mul[i][j] << " ";
            }
            cout << endl;   
    }

    return 0;
}