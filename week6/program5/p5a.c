//C Program to find the sum of series 1^2 + 2^2 + …. + n^2

#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    int sum = 0;

    printf("enter nth term ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + pow(i,2);
    }
    printf("sum = %d",sum);
    return 0;
}