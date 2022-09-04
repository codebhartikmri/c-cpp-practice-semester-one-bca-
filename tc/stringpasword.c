#include<stdio.h>
void main()
{

    int count = 0, small = 0, digit = 0, ss = 0, cap = 0, sum;
    char pasword[20];
    int i;
    printf("\nenter any text =");
    scanf("%s", pasword);
    for (i = 0; pasword[i]!= '\0';i++)
    {


        if(pasword[i]>='A'&&pasword[i]<='Z')
        {
            cap = 1;
        }
         if(pasword[i]>='a'&&pasword[i]<='z')
        {
             small = 1;
        }
         if(pasword[i]>='0' &&pasword[i]<='9')
        {
            digit = 1;
        }

         if(pasword[i]>='A'&&pasword[i]<='Z'){

         }else if(pasword[i]>='a'&&pasword[i]<='z'){

         }else if(pasword[i]>='0' &&pasword[i]<='9'){

         }else{
             ss = 1;
         }
        // else {
        //     ss = 1;
        // }
    }
        if(i>=8)
            count = 1;


        sum = cap + small + digit + count +ss;
        if(sum==5)
        {
            printf("\nstrong");
        }
        else if(sum==4)
        {
            printf("\nvery good");
        }
        else if(sum==3)
        {
            printf("\ngood");
        }
        else if(sum==2){
            printf("\npoor");
        }
        else if(sum==1){
            printf("\nvery poor");
        }
        
}