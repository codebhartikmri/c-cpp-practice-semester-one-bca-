#include<stdio.h>
void main(){

    char name[10];
    int i, j = 0,size = 0, f = 0;
    char rev[10];
    printf("\nenter any name and size ; ");
    scanf("%s%d", name, &size);
    for (i = size - 1; i >= 0;i--){

        rev[j] = name[i];
        j++;

    }
   printf("\n revers %s", rev);
    rev[j] = '\0';
     printf("\n revers %s", rev);
    for (j = 0; j < size;j++){
        if(name[j]!=rev[j]){
            
            f = 1;
            break;
        }
        
        
    }
    if(f==0){
        printf("\npalindrom");
    }
    else
    {

        printf("\nnot palindrom");
    }
}