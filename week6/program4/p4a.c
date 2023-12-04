//Write a C Program to find the Sum of Series sum=1 + 1/2! + 1/3! + 1/4 !+ … + 1/N!.

#include <stdio.h>
int main()
{
    int n,i;
    float sum = 1.0,d=1.0,f;

    printf("enter the nth term ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
            d=d*i;
            f=1/d;
            sum=sum+f;
    }
    printf("sum = %.2f",sum);
    return 0;
}