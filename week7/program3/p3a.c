//Write a C Program to print sum of digits using recursive functions.

#include <stdio.h>

int sum(int);

int main()
{
    int n,z;
    printf("enter any number ");
    scanf("%d",&n);
    z=sum(n);
    printf("sum of digits : %d ",z);
    return 0;
}

int sum(int n)
{
    if(n==0)
    return n;
    else 
    return n%10+sum(n/10);
}