#include <stdio.h>
void main()
{

    int n, sum = 0, d, org;
    printf("\nenter any no");
    scanf("%d", &n);
    org = n;
    while (n > 0)
    {

        d = n % 10;
        sum = sum + d * d * d;
        n = n / 10;
    }
    if (n == sum)
    {

        printf("\narm");
    }
    else
    {

        printf("\n not arm");
    }
}