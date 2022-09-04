#include <stdio.h>

void main()
{

    char name[20];
    float eunit;
    float charge = 0.0;
    printf("Please enter the name of user\n");
    scanf("%s", name);
    printf("Please enter the the amount of electricty in unit \n");
    scanf("%f", &eunit);
    charge += 50.00;
    if (eunit <= 100)
    {
        charge = charge + (eunit * 0.60);
    }
    else if (eunit <= 300 && eunit > 100)
    {
        float dd = eunit - 100;
        charge = charge + (100 * 0.60) + (dd * 0.80);
    }
    else if (eunit > 300)
    {

        float dd = eunit - 300;
        charge = charge + (100 * 0.60) + (200 * 0.80) + (dd * 0.90);
    }

    if (charge > 300.00)
    {
        float ff = (charge * 15) / 100;
        charge = charge + ff;
    }
    printf("Name\tcharge\n");
    printf("%s\t%.2f\n", name, charge);
}