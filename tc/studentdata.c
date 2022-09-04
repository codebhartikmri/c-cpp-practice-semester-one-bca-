#include <stdio.h>
void main()
{

    int m1, m2, m3, m4, m5;
    int sum;
    int percentage;
    scanf("%d ", &m1);
    scanf("%d ", &m2);
    scanf("%d ", &m3);
    scanf("%d ", &m4);
    scanf("%d ", &m5);
    sum = m1 + m2 + m3 + m4 + m5;
    percentage = (sum * 100) / 500;
    printf("\ntotal marks = %d", sum);
    printf("percentage= %d", percentage);
}