#include<stdio.h>
void swap(int* x,int* y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}
void main()
{
    int x, y;
    printf("\n enter any number");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("\n%dand%d", x, y);
}