#include<stdio.h>

int  *fun(int* a, int b);
void main()
{

    int a = 7, b = 9;
    int *sum = fun(&a, b);
    printf("%d", *sum);
}

int *fun(int* a,int b){
    *a = *a + b;
    return a;
}