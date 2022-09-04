#include<stdio.h>
#include<string.h>

void main(){
    int i, j;
    char fname[10], lname[10], fullname[20];
    printf("\n Enter first and last name ");
    scanf("%s%s", fname, lname);
    for (i = 0; fname[i] != '\0'; i++)
    {

        fullname[i] = fname[i];
    }
    for (j = 0; lname[j] != '\0';j++)
    {
      fullname[i] = lname[j];
      i++;
    }
    fullname[i] = '\0';

    printf("%s", fullname);
}