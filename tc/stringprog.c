#include<stdio.h>
#include<string.h>

void main(){
    int i = 0, j = 0;
    char title[20], first_name[20], middle_name[20], last_name[20];

    char allvalue[80];

    printf("\n Please enter title first name middle name last name ");

    scanf("%s%s%s%s", title, first_name, middle_name, last_name);

    for (i = 0; title[i] != '\0'; i++)
    {
        allvalue[i] = title[i];
    }

    allvalue[i] = ' ';
    for (j = 0; first_name[j] != '\0'; j++)
    {
        allvalue[i] = first_name[j];
        i++;
    }
    allvalue[i] = ' ';
    i++;

    for (j = 0; middle_name[j] != '\0'; j++)
    {
        allvalue[i] = middle_name[j];
        i++;
    }
    allvalue[i] = ' ';
    i++;
     for (j = 0; last_name[j] != '\0'; j++)
    {
        allvalue[i] = last_name[j];
        i++;
    }

    printf("\n welcome %s", allvalue);
}