#include<stdio.h>

struct abc{
    int a;
    char ch;
};

void main(){

    struct abc as;

    as.a = 10;
    as.ch = 'y';

    int var = 200;
    int *ptr = &var;

    char chss = 'u';
    char *ptrch = &chss;

    struct abc *ddd;

   


     ddd = &as;

    printf("%d", ddd->a);//arrow operator 
    printf("%c",ddd->ch);
}