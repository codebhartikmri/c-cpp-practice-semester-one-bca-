#include <stdio.h>
void main()
{

    int cp, sp;
    printf("\nenter any no =");
    scanf("%d%d", &cp, &sp);
    if (sp > cp)

    {

        printf("\nprofit=%d", sp - cp);
    }
    else

    {
        printf("\nharm=%d", cp - sp);
    }
}