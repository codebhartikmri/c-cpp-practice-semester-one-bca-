#include <stdio.h>
void main()
{

    int c, r, rev = 0;

    // cin >> a;
    scanf("%d", &c);
    // c = 543;
    // r = c % 10;    //3
    // sum = sum + r; //3
    // q = c / 10;    //54
    // r = q % 10;    //4
    // sum = sum + r; //3+4=7
    // q = q / 10;    //5
    // sum = sum + q;

    while (c != 0)
    {
        r = c % 10;
        rev = rev * 10 + r;

        c = c / 10;
    }

    printf("\n reverse =  %d \n", rev);
}