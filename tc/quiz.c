#include <stdio.h>

void main()
{
    int x, y = 1;

    x = y++ * y++;

    printf("x= %d y= %d", x, y); // x=x+1
}