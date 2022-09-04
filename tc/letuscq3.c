#include <stdio.h>
void main()
{
    int year;
    printf("\nenter year=%d");
    scanf("%d", &year);
    if (year / 4 == 0)
    {

        if (year / 100 == 0)
        {

            if (year / 400 == 0)
            {
                printf("\n this year is leap year");
            }
            else
            {

                printf("\n this year is not leap year");
            }
        }
        else
        {

            printf("\n this year is not leap year");
        }
    }
    else
    {

        printf("\n this year is not leap year");
    }
}