#include<stdio.h>
void swap(int *x,int *y){
int temp;
temp = *x;
*x = *y;
*y = temp;
}
void main()
{
    int a, b;
    printf("\nPlease enter any two number");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("\n%d,%d", a, b);
}
