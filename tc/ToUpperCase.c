#include <stdio.h>
void main()
{
    char name[100];
    int i;
    printf("Enter your text : ");
    gets(name);
    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
            name[i] = name[i] - 32;
        }
    }
    printf("Uppercase string : %s",name);
}