#include<stdio.h>
void palindrome(int n);
int main()
{

    int n;
    printf("\nenter 3 digit no");
    scanf("%d",&n);
    palindrome(n);
}
void palindrome(int n){

    int r, org, sum = 0;
    org = n;
    r = n % 10;
    sum= sum + r * r * r;
    n = n / 10;
    r = n % 10;
    sum = sum + r * r * r;
    n = n / 10;
    sum = sum + n;
    if (sum == org)
    {

        printf("\n plindrome no");
    }
    else
    {

        printf("\n not a palindrome no");
    }
}