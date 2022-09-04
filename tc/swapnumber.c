#include <stdio.h>
void main()
{
    int c, d, temp;

    printf("\n enter number for c and d");
    scanf("%d %d", &c, &d);
    temp = c;
    c = d;
    d = temp;
    printf("\n the value of c is %d and D is %d", c, d);
}