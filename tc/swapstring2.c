#include<stdio.h>


void main(){

    char name[20], rev[10];
    int i, j=0, f = 0, length = 0;
    printf("\nenter name and length = ");
    scanf("%s %d", name,&length);

    for (i = length - 1; i >= 0;i--)
    {
        rev[j] = name[i];
        j++;
    }
    printf("\nrevers = %s" , rev);
    rev[j] = '\0';
    for (j = 0; j < length;j++)
    {
      if(name[j]!=rev[j])
      {
            f = 1;
             break;
      }
    }

      if(f==0)
      {
          printf("\n palindrom");
      }else
      {

          printf("\nnot palindrom");
      }
    
}