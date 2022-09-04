#include <stdio.h>
void main()
{

    int c, r, rev;
    scanf("%d", &c);

    while (c != 0)
    {

        r = c % 10;

        rev = rev * 10 + r;

        c = c / 10;
    }
    printf("\n revers =", rev);
}