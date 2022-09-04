#include <stdio.h>

void main()
{
    float sachin_r, sachin_i, sachin_n;
    float saurav_r, saurav_i, saurav_n;
    float rahul_r, rahul_i, rahul_n;

    printf("Please enter the runs made by sachin \n");
    scanf("%f", &sachin_r);
    printf("Please enter the inngs of sachin \n");
    scanf("%f", &sachin_i);
    printf("Please enter time not out \n");
    scanf("%f", &sachin_n);
    float avr = sachin_r / sachin_i;

    printf("Please enter the runs made by Sourav \n");
    scanf("%f", &saurav_r);
    printf("Please enter the inngs of sachin \n");
    scanf("%f", &saurav_i);
    printf("Please enter time not out \n");
    scanf("%f", &saurav_n);
    float savr = saurav_r / saurav_i;

    printf("Please enter the runs made by Rahul \n");
    scanf("%f", &rahul_r);

    printf("Please enter the inngs of sachin \n");
    scanf("%f", &rahul_i);
    printf("Please enter time not out \n");
    scanf("%f", &rahul_n);
    float ravr = rahul_r / rahul_i;

    printf("name \tRuns\tInn\tNotOut\tAverage run rate\n");

    printf("Sachin \t%.2f\t%.2f\t%.2f\t%.2f\n", sachin_r, sachin_i, sachin_n, avr);
    printf("Saurav \t%.2f\t%.2f\t%.2f\t%.2f\n", saurav_r, saurav_i, saurav_n, savr);
    printf("Saurav \t%.2f\t%.2f\t%.2f\t%.2f\n", rahul_r, rahul_i, rahul_n, ravr);
}