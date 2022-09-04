#include<stdio.h>


void callsal( int *hh,int y){
    *hh = *hh + y;
}
void main(){

    int sallery = 0, bonus = 0;
    printf("Please enter sallery\n");
    scanf("%d", &sallery);
    printf("Please enter bonus\n");
    scanf("%d", &bonus);
    callsal(&sallery, bonus);

    printf("%d", sallery);
}